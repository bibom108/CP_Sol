/*
    Question: Given 2 tree, check if smaller tree is subtree of bigger tree.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: BFS bigger tree, if find root of smaller tree, check the rest.
Space: 0(log(n) + log(m))
Time: 0(nm)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool subCheck(TreeNode *root, TreeNode *sub){
        if (root == NULL && sub == NULL)
            return true;
        else if (root != NULL && sub == NULL)
            return false;
        else if (root == NULL && sub != NULL)
            return false;
        
        if (sub->val != root->val)
            return false;
        else
            return subCheck(root->left, sub->left) && subCheck(root->right, sub->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL)
            return false;
        if (subRoot == NULL)
            return true;
        if (subRoot->val == root->val){
            if (subCheck(root, subRoot))
                return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};

int main(){
    
}