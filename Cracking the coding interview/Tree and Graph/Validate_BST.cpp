/*
    Question: Given a tree, check if it is BST.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Go thru all the node, check all left and right node if they less than or greater than current node's
value.
Space: 0(logn)
Time: 0(n^2)

Sol2: We can see that at each node, we just need to compare it with previous parent.
Space: 0(logn)
Time: 0(n)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    bool check(TreeNode *node, int target, int type){
        if (type == 0){
            if (node == NULL)
                return true;
            if (node->val >= target)
                return false;
            else return check(node->left, target, type) && check(node->right, target, type);
        }
        else {
            if (node == NULL)
                return true;
            if (node->val <= target)
                return false;
            else return check(node->left, target, type) && check(node->right, target, type);
        }
    }
    bool isValidBST(TreeNode* root) {
        if (root == NULL)
            return true;
        if (check(root->left, root->val, 0) && check(root->right, root->val, 1))
            return isValidBST(root->left) && isValidBST(root->right);
        else return false;
    }
};

class Solution2 {
public:
    bool check(TreeNode *node, TreeNode *min, TreeNode *max){
        if (node == NULL)
            return true;
        if ((min != NULL && node->val <= min->val) || (max != NULL && node->val >= max->val))
            return false;
        return check(node->left, min, node) && check(node->right, node, max);
    }
    bool isValidBST(TreeNode* root) {
        return check(root, NULL, NULL);
    }
};

int main(){
    
}