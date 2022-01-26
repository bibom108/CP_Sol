/*
    https://leetcode.com/problems/rotate-image/
    
    Question:  Given a NxN matrix, rotate it 90 degree
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Append the new matrix on 1 side
Space: 0n^2
Time: 0n^2

Sol2: Rotate
Space: 01
Time: 0n^2
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        for (int i = n-1; i >= 0; i--){
            for (int j = 0; j < n; j++){
                matrix[j].push_back(matrix[i][j]);
            }
        }
        
        for (int i = 0; i < n; i++){
            auto it = matrix[i].begin();
            matrix[i].erase(it, it+n-1);
        }      
    }
};

class Solution2 {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        for (int i = 0; i < n/2; i++){
            for (int j = i; j < n-1-i; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n-1-j][i];
                matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                matrix[j][n-1-i] = temp;
            }
        } 
    }
};

int main(){
    
}