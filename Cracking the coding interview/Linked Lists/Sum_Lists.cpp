/*
    Question: Given a ll represent 2 numbers, output their sum.
    Input: 7-1-6 5-9-2
    Output: 2-1-9
    More:
*/

// White board part
/*
Sol1: The order is the reverse.
Space: 0(m+n)
Time: 0(m+n)

Sol2: The order is not changed
Space: 0(m+n)
Time: 0(m^2 + n^2)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = new ListNode();
        ListNode *head = res;
        int add = 0;
        while (l1 != NULL || l2 != NULL || add == 1){
            int tmp = add;
            if (l1 != NULL) tmp += l1->val;
            if (l2 != NULL) tmp += l2->val;
            add = tmp / 10;
            head->next = new ListNode(tmp%10);
            head = head->next;
            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
        }
        return res->next;
    }
};

class Solution2 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = NULL;
        int add = 0;
        while (l1->val != -1 || l2->val != -1 || add == 1){
            ListNode *p1 = l1;
            ListNode *p2 = l2;
            while (p1->next != NULL && p1->next->val != -1)
                p1 = p1->next;
            
            while (p2->next != NULL && p2->next->val != -1)
                p2 = p2->next;
            
            int tmp = add;
            if (p1->val != -1){
                tmp += p1->val;
                p1->val = -1;
            }
            if (p2->val != -1){
                tmp += p2->val;
                p2->val = -1;
            }
            add = tmp / 10;
            ListNode *head = new ListNode(tmp%10);
            head->next = res;
            res = head;
        }
        return res;
    }
};

int main(){
    
}