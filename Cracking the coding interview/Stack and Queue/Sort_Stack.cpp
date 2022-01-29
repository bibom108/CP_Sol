/*
    Question: Given a stack, sort it in non - increasing order.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: The idea is similar to insertion sort.
Space: 0(n)
Time: 0(n^2)

Sol2: Instead of pushing top element into tt stack, we can just put it right on top of ss stack,
then treat it like the cur element.
Space: 0(n)
Time: 0(n^2)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

stack <int> sortStack(stack <int> ss){
    stack <int> tmp;
    while (!ss.empty()){
        int cur = ss.top();
        ss.pop();
        if (tmp.empty() || cur >= tmp.top()){
            tmp.push(cur);
        }
        else {
            stack <int> tt;
            while (!tmp.empty() && cur < tmp.top()){
                tt.push(tmp.top());
                tmp.pop();
            }
            tmp.push(cur);
            while (!tt.empty()){
                tmp.push(tt.top());
                tt.pop();
            }
        }
    }
    while (!tmp.empty()){
        ss.push(tmp.top());
        tmp.pop();
    }
    return ss;
}

int main(){
    stack <int> ss;
    ss.push(8);
    ss.push(9);
    ss.push(10);
    ss.push(1);
    ss.push(2);
    ss.push(5);
    ss.push(4);
    ss = sortStack(ss);
    while (!ss.empty()){
        cout << ss.top() << endl;
        ss.pop();
    }
}