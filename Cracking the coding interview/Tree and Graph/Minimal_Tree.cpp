/*
    Question: Given an array in increasing order, convert it into BST.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Using BS
Space: 0(n)
Time: 0(n)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode *helper(vector<int>& nums, int i, int j){
        if (i <= j){
            int root = (i+j)/2;
            TreeNode *res = new TreeNode(nums[root]);
            res->left = helper(nums, i, root-1);
            res->right = helper(nums, root+1, j);
            return res;
        }
        else {
            return NULL;
        }
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        return helper(nums, i, j);
    }
};

int main(){
    
}