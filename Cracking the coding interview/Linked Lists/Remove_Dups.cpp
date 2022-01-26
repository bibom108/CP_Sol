/*
    Question: Given a ll, remove duplicate element. 
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: 
Space: 0n
Time: 0n

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        map <int, int> mm;
        Node *h = head->next;
        Node *pre = head;
        mm[pre->data] = 1;
        while (h != NULL){
            if (mm[h->data] == 1){
                pre->next = h->next;
                h = pre->next;
            }
            else {
                mm[h->data] = 1;
                h = h->next;
                pre = pre->next;
            }
        }
        return head;
    }
};

int main(){
    
}