/*
    https://leetcode.com/problems/set-matrix-zeroes/

    Question: If a element in MxM matrix is 0, its entrire row and column are set to 0
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Use first row and first column to extend 0 in the body, then set 0 to all column, all row
that contain 0 in first column or first row. Check first if any 0 in first row and first column
initial, then set first row and first column to 0 later
Space: 01
Time: 0(MxM)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col = 0;
        int row = 0;
        for (int i = 0; i < n; i++)
            if (matrix[i][0] == 0) col = 1;
        for (int i = 0; i < m; i++)
            if (matrix[0][i] == 0) row = 1;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){            
                if (matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for (int i = 1; i < n; i++){
            if (matrix[i][0] == 0){
                for (int j = 1; j < m; j++){
                    matrix[i][j] = 0;
                }
            }
        }
        for (int i = 1; i < m; i++){
            if (matrix[0][i] == 0){
                for (int j = 1; j < n; j++)
                    matrix[j][i] = 0;
            }
        }
        if (col == 1){
            for (int i = 0; i < n; i++)
                matrix[i][0] = 0;
        }
        if (row == 1){
            for (int i = 0; i < m; i++)
                matrix[0][i] = 0;
        }
    }
};

int main(){
    
}