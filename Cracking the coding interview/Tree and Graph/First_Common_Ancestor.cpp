/*
    Question: Given 2 node in a binary tree, find the lowest common ancestor
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Brute force, check the first node from the root that either the left node or the right node 
not have both p and q in it.
Space: 0(logn)
Time: 0(nlogn)

Sol2: We can see that each time we check a node, we have to go to all over under node of that node,
we can optimize this by bubble up technique, mean that we transmit the result to upper node.
Space: 0(n)
Time: 0(n)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    bool check(TreeNode *root, TreeNode *p){
        if (root == p){
            return true;
        }
        if (root == NULL)
            return false;
        return check(root->left, p) || check(root->right, p);
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool pOnLeft = check(root->left, p);
        bool qOnLeft = check(root->left, q);
        if (pOnLeft != qOnLeft)
            return root;
        else {
            return (pOnLeft)?lowestCommonAncestor(root->left, p, q): lowestCommonAncestor(root->right, p, q);
        }
    }
};

class Solution2 {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || root == p || root == q){
            return root;
        } 
        TreeNode *l = lowestCommonAncestor(root->left, p, q);
        TreeNode *r = lowestCommonAncestor(root->right, p, q);
        if ((l == p || l == q) && (r == p || r == q)){
            return root;
        }
        else {
            return (l==NULL)?r:l;
        }
    }
};

int main(){
    
}