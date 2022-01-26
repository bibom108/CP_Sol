/*
    Question: Delete a node, given access to that node, not the head.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Move data and then delete last node.
Space: 01
Time: 0n

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *nn = node->next;
        while (nn != NULL){
            node->val = nn->val;
            nn = nn->next;
            if (nn != NULL)
                node=node->next;
        }
        node->next = NULL;
    }
};

int main(){
    
}