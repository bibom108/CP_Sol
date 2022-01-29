/*
    Question:  
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Using 1 queue for both cats and dogs
Space: 0(n)
Time: 0(n)

Sol2: Using 2 queue for cats and dogs, a var for a timestamp to check order.
Space: 0(n)
Time: 0(1)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Animals{
public:
    int type; // 0: cat, 1: dog
    // other info
    Animal(int t){
        type = t;
    }
}

class Shelter{
public:
    queue <Animals *> q;
    Shelter(){

    }

    void enqueue(Animals *a){
        q.push(a);
    }

    Animals *dequeueAny(){
        Animals *res = q.front();
        q.pop();
        return res;
    }

    Animals *dequeueDog(){
        queue <Animals *> tmp;
        while (!q.empty() && q.front()->type == 0){
            tmp.push(q.front());
            q.pop();
        }
        if (q.empty())
            return NULL;
        else {
            Animals *res = q.front();
            while (!q.empty()){
                tmp.push(q.front());
                q.pop();
            }
            q = tmp;
            return res;
        }
    }

    Animals *dequeueCat(){
        queue <Animals *> tmp;
        while (!q.empty() && q.front()->type == 1){
            tmp.push(q.front());
            q.pop();
        }
        if (q.empty())
            return NULL;
        else {
            Animals *res = q.front();
            while (!q.empty()){
                tmp.push(q.front());
                q.pop();
            }
            q = tmp;
            return res;
        }
    }
};

int main(){
    
}