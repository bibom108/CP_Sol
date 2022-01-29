/*
    Question: Given inf of stack with limited capacity. Implement these method.
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Use add pointer (point to the leftmost not full stack) and delete pointer (point to rightmost non empty stack)
Space: 0(n^2)
Time:
+ Pop: 0(n)
+ Push: 0(n)
+ Pop at index: 0(1)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class DinnerPlates {
public:
    vector<vector<int>> arr;
    int aIndex = 0;
    int dIndex = 0;
    int n = 0;
    int cap;
    DinnerPlates(int capacity) {
        this->cap = capacity;
        arr = vector<vector<int>>{100002,vector<int>()};
    }
    
    void push(int val) {
        while (arr[aIndex].size() == cap){
            aIndex++;
        }
        arr[aIndex].push_back(val);
        if (aIndex > dIndex)
            dIndex = aIndex;
    }
    
    int pop() {
        while (dIndex >= 0 && arr[dIndex].size() == 0){
            dIndex--;
        }
        if (dIndex == -1)
            return -1;
        int res = arr[dIndex].back();
        arr[dIndex].pop_back();
        return res;
    }
    
    int popAtStack(int index) {
        if (arr[index].size() == 0){
            return -1;
        }
        else {
            int res = arr[index].back();
            arr[index].pop_back();
            if (index < aIndex){
                aIndex = index;
            }
            return res;
        }
    }
};

int main(){
    
}