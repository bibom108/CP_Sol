/*
    Question: https://leetcode.com/problems/unique-paths-ii/
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Using dp to store left and top number of move, add up to current cell.
Space: 0(n*m)
Time: 0(n*m)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        if (arr[0][0] == 1)
            return 0;
        int m = arr.size();
        int n = arr[0].size();
        vector <vector <int>> dp (m, vector <int> (n));
        for (int i = 0; i < n; i++)
            if (arr[0][i] != 1)
                dp[0][i] = 1;
            else break;
        for (int i = 0; i < m; i++)
            if (arr[i][0] != 1) 
                dp[i][0] = 1;
            else break;
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (arr[i][j] != 1)
                    dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
    }
};

int main(){
    
}