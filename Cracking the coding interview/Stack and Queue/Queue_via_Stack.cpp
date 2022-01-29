/*
    Question: Implement a queue using 2 stack
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: 
Space: 0(1)
Time: 
+ pop: 0(n)
+ push: 0(1)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack <int> s1;
    stack <int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        
    }
    
    int pop() {
        while (!s1.empty()){
            int tmp = s1.top();
            s1.pop();
            s2.push(tmp);
        }
        int res = s2.top();
        s2.pop();
        while (!s2.empty()){
            int tmp = s2.top();
            s2.pop();
            s1.push(tmp);
        }
        return res;
    }
    
    int peek() {
        while (!s1.empty()){
            int tmp = s1.top();
            s1.pop();
            s2.push(tmp);
        }
        int res = s2.top();
        while (!s2.empty()){
            int tmp = s2.top();
            s2.pop();
            s1.push(tmp);
        }
        return res;
    }
    
    bool empty() {
        return s1.empty();
    }
};

int main(){
    
}