/*
    Question: Given a tree, check if it is balanced.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Check left height and right height of every node in the tree.
Space: 0(logn)
Time: 0(nlogn)

Sol2: While checking the height of each node, we can see that we repeat
tranvel every node twice. We can optimize this by check balanced and get
height at the same time.
Space: 0(logn)
Time: 0(n)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        else {
            return max(maxDepth(root->left), maxDepth(root->right)) + 1;
        }
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;
        else {
            int diff = maxDepth(root->left) - maxDepth(root->right);
            if (diff > 1 || diff < -1)
                return false;
            else {
                return isBalanced(root->left) && isBalanced(root->right);
            }
        }
    }
};

class Solution2 {
public:
    int findH(TreeNode *root){
        if (root == NULL)
            return 0;
        int l = findH(root->left);
        if (l == -1)
            return -1;
        int r = findH(root->right);
        if (r==-1)
            return -1;
        if (abs(l-r) > 1)
            return -1;
        return max(findH(root->left), findH(root->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return findH(root) >= 0;
    }
};

int main(){
    
}