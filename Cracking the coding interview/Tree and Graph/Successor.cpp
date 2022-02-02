/*
    Question: Given a node in BST, find the next inorder move.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: If there is a right subtree, return leftmost node of right subtree. Otherwise,
track back to parent until find a parent where the current X on its left, if we dont
find one, return NULL, because we are at the very end node.
Space: 0(1)
Time: 0(logn)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node *getParent(Node *root, Node *x){
        if (root->left == x)
            return root;
        if (root->right == x)
            return root;
            
        if (root->data > x->data){
            return getParent(root->left, x);    
        }
        
        if (root->data < x->data){
            return getParent(root->right, x);   
        }
    }
    
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        if (x->right != NULL){
            Node *res = x->right;
            while (res->left != NULL)
                res = res->left;
            return res;
        }
        else {
            Node *parent = getParent(root, x);
            while (parent->right == x && parent != root){
                x = parent;
                parent = getParent(root, x);
                if (parent == root)
                    break;
            }
            if (parent->left == x) {
                return parent;
            }
            else return NULL;
        }
    }
};

int main(){
    
}