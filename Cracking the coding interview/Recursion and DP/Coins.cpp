/*
    Question: https://leetcode.com/problems/coin-change-2/
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Use recursion to generate cases 
Time: 0(n^ m) n is number of coin, m is the depth
Space: 0(m)

Sol2: Use memorization
Time: 0(m.n)
Space: 0(m.n)

Sol3: Use table
Time: 0(m.n)
Space: 0(m.n)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution3 {
public:
    vector <vector <int>> dp;
    int change(int total, vector<int>& coins) {
        dp.resize(coins.size() + 1, vector <int> (total + 1));
        for (int i = 0; i < coins.size()+1; i++)
            dp[i][0] = 1;
        
        for (int i = 1; i < coins.size()+1; i++) {
           for (int j = 1; j < total + 1; j++) {
               int take = (j - coins[i-1] >= 0) ? dp[i][j - coins[i-1]] : 0;
               int notTake = dp[i-1][j];
               dp[i][j] = take + notTake;
           } 
        }
        return dp[coins.size()][total];
    }
};

class Solution2 {
public:
    int dp[301][5001];
    int tot;
    int helper(vector <int> coin, int cur, int index) {
        if (cur == tot) return 1;
        if (cur > tot || index >= coin.size()) return 0;
        if (dp[index][cur] != -1) return dp[index][cur];
        
        int take = 0;
        if (coin[index] + cur <= tot)
            take = helper(coin, cur+coin[index], index); 
        int notTake = helper(coin, cur, index + 1);
        dp[index][cur] = take + notTake;
        return dp[index][cur];
    }
    int change(int total, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        tot = total;
        return helper(coins, 0, 0);
    }
};

class Solution1 {
public:
    int res = 0;
    void helper(vector <int> coin, int tot, int cur, int index) {
        if (cur == tot) {
            res++;
        }
        else if (cur < tot) {
            for (int i = index; i < coin.size(); i++) {
                if (cur + coin[i] > tot)
                    return;
                helper(coin, tot, cur+coin[i], i);
            }
        }
    }
    int change(int tot, vector<int>& coins) {
        helper(coins, tot, 0, 0);
        return res;
    }
};

int main(){
    
}