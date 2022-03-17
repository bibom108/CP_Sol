/*
    Question: https://leetcode.com/problems/search-a-2d-matrix-ii/
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Start from top right cell, loop thru table
Time: 0 (m+n)
Space: 0 (1)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col = n-1, row = 0;
        while (row < m && col >= 0) {
            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] > target) col--;
            else row++;
        }
        return false;
    }
};

int main(){
    
}