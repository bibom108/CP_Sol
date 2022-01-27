/*
    Question: Given 2 ll, return intersection.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Slowly move pointer from 1 ll, and check to the end of second ll. Return if found intersection.
Space: 0(1)
Time: 0(m.n)

Sol2: Count number of node in headA and headB, then do the checking like 2 ll have same length.
Space: 0(1)
Time: 0(m+n)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1 = headA;
        while (p1 != NULL){
            ListNode *p2 = headB;
            while (p2 != NULL){
                if (p1 == p2){
                    return p1;
                }
                p2 = p2->next;
            }
            p1 = p1->next;
        }
        return NULL;
    }
};

class Solution2 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        int a = 0;
        int b = 0;
        while (p1 != NULL){
            a++;
            p1 = p1->next;
        }
        while (p2 != NULL){
            b++;
            p2 = p2->next;
        }
        if (b < a){
            swap(headA, headB);
            swap(a, b);
        }
        for (int i = 0; i < b-a; i++){
            headB = headB->next;     
        }
        while (headA != NULL){
            if (headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};

int main(){
    
}