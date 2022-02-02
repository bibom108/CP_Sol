/*
    Question:  
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Using recursion to discover each node, then push it into according depth of result.  
Space: 0(n^2)
Time: 0(n + logn) logn from using stack for recursion. 

Sol2: Using BFS to discover each level.
Space: 0(n^2)
Time: 0(n)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    int n = 100000;
    vector<vector<int>> res;
    void helper(TreeNode *root, int i){
        if (root != NULL){
            res[i].push_back(root->val);
            if (root->left != NULL){
                helper(root->left, i+1);
            }
            if (root->right != NULL){
                helper(root->right, i+1);
            }
            
        }    
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        res.resize(n);
        helper(root, 0);
        int i = 0;
        while (res[i].size() != 0)
            i++;
        res.resize(i);
        return res;
    }
};

class Solution2 {
public:	
    vector<vector<int>> levelOrder(TreeNode* root) {
		if (root == NULL) return {};
		vector <vector <int>> res;
		queue <TreeNode *> q;
		q.push(root);
		while (!q.empty()){
			int s = q.size();
			vector <int> tmp;
			for (int i = 0; i < s; i++){
				TreeNode *h = q.front(); q.pop();
				if (h->left) q.push(h->left);
				if (h->right) q.push(h->right);
				tmp.push_back(h->val);
			}
			res.push_back(move(tmp));
		}
		return res;
    }
};

int main(){
    
}