/*
    Question: Given a ll, check if it is palindrome
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Using stack to push half, check on another half
Space: 0(n)
Time: 0(n)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack <int> ss;
        ListNode *p1 = head;
        int n = 0;
        while (p1 != NULL){
            n++;
            p1 = p1->next;
        }
        p1 = head;
        for (int i = 0; i < n/2; i++){
            ss.push(p1->val);
            p1 = p1->next;
        }
        if (n%2 == 1)
            p1 = p1->next;
        for (int i = 0; i < n/2; i++){
            if (ss.top() != p1->val)
                return false;
            ss.pop();
            p1 = p1->next;
        }
        return true;
    }
};

int main(){
    
}