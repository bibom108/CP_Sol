/*
    Question: Given a binary tree, find path from top to bottom that equal to a value.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: The idea get from prefix sum problem, we keep track the prefix sum with a map, at a node,
if we cant go anymore, we delete that node from prefix sum, and go back to parent node.
Space: 0(n)
Time: 0(n)

Sol2: Brute Force, go thru each node in the tree, at each node, we go thru all child node and check if
the sum from parent node to it is equal to target sum or not.
Space: 0(n) với n là chiều cao của cây
Time: 0(n^2)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    int res = 0;
    map <int, int> mm;
    int prev = 0;
    int tar;
    int pathSum(TreeNode* root, int targetSum) {
        mm[0] = 1;
        tar = targetSum;
        helper(root);
        return res;
    }
    void helper(TreeNode *node){
        if (node == NULL)
            return;
        prev += node->val;
        int cur = prev - tar;
        if (mm[cur] > 0)
            res += mm[cur];
        mm[prev]++;
        helper(node->left);
        helper(node->right);
        mm[prev]--;
        prev -= node->val;
    }
};

class Solution2 {
public:
    int result = 0;
    int tar;
    void helper(TreeNode *root, int cur, int &res){
        if (root == NULL)
            return;
        cur = cur + root->val;
        if (cur == tar)
            res++;
        helper(root->left, cur, res);
        helper(root->right, cur, res);
    }
    void recur(TreeNode *root){
        if (root == NULL)
            return;
        int res = 0;
        helper(root, 0, res);
        result += res;
        recur(root->left);
        recur(root->right);
    }
    int pathSum(TreeNode* root, int targetSum) {
        tar = targetSum;
        recur(root);
        return result;
    }
};

int main(){
    
}