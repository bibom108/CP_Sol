/*
    Question: Implement stack with min function
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Each node contain a "current Min" variable
Space: 
Time: 0(1)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    int curMin;
    Node(int val, int curMin){
        this->curMin = curMin;
        this->val = val;
        next = NULL;
    }
    Node (){
        val = 0;
        curMin = 0;
        next = NULL;
    }
};

class MinStack {
public:
    Node *head;
    MinStack() {
        head = NULL;
    }
    
    void push(int val) {
        int curMin = min(this->getMin(), val);
        Node *tmp = new Node(val, curMin);
        tmp->next = head;
        head = tmp;
    }
    
    void pop() {
        head = head->next;
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        if (head == NULL)
            return INT_MAX;
        else
            return head->curMin;
    }
};

int main(){
    
}