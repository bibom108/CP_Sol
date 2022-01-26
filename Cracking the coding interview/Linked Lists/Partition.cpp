/*
    Question: Group 2 part of ll into less than x and equal or greater than x
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: If we dont care about the order, we can use 2 pointer, swap when meet the condition of p2 value greater 
or equal to x and p1 is smaller than x
Space: 01
Time: 0n

Sol2: If we care about the order (stable), we use 2 pointer of 2 group, then joint them.
Space: 01
Time: 0n
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *p1 = head->next;
        ListNode *p2 = head;
        while (p1 != NULL && p2 != NULL){
            if (p1->val < x && p2->val >= x){
                swap(p1->val, p2->val);
                p1 = p1->next;
                p2 = p2->next;
            }
            else{
                if (p1->val >= x){
                    p1 = p1->next;
                }
                if (p2->val < x){
                    p2 = p2->next;
                }
            }
        }
        return head;
    }
};

class Solution2 {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *ge = new ListNode();
        ListNode *less = new ListNode();
        ListNode *p1 = ge;
        ListNode *p2 = less;
        ListNode *h = head;
        while (h != NULL){
            if (h->val >= x){
                p1->next = h;
                p1 = p1->next;
            }
            else {
                p2->next = h;
                p2 = p2->next;
            }
            h = h->next;
        }
        p1->next = NULL;
        ge = ge->next;
        p2->next = ge;
        return less->next;
    }
};

int main(){
    
}