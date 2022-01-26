/*
    Question: Given kth, delete kth element from last.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Count the number of element. Delete the n-k element.
Space: 01
Time: 0n

Sol2: Create 2 pointer to head of ll, first go to k element. Then both go
until first meet NULL node, then the second pointer reach n-k element.
Space: 01
Time: 0n
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *tmp = head;
        int i = 0;
        while (tmp != NULL){
            i++;
            tmp = tmp->next;
        }
        ListNode *h = head;
        for (int j = 0; j < i-n-1; j++){
            h = h->next;
        }
        if (i == n && i != 1){
            h = h->next;
            head = h;
        }
        else if (i == n && i == 1){
            head = NULL;
        }
        else
            h->next = h->next->next;
        return head;
    }
};

int main(){
    
}