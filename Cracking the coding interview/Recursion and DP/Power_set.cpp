/*
    Question: https://leetcode.com/problems/subsets/submissions/
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Using backtracking
Space: 0 (n*2^n)
Time: 0 (n*2^n)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector <vector <int>> res;
    vector <int> cur;
    void helper(vector <int> num, int n, int index) {
        if (cur.size() == n) {
            res.push_back(cur);
            return;
        }
        if (index == num.size())
            return;
        cur.push_back(num[index]);
        helper(num, n, index+1);
        cur.pop_back();
        helper(num, n, index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        for (int i = 0; i <= nums.size(); i++)
            helper(nums, i, 0);
        
        return res;
    }
};

int main(){
    
}