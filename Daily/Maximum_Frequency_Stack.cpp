/*
    Question: https://leetcode.com/problems/maximum-frequency-stack/
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Using many stack with each key is the max frequency of a element.
Time: 0(1)
Space: 0(N)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class FreqStack {
public:
    unordered_map <int, int> freq;
    unordered_map <int, stack <int>> arr;
    int maxFreq;
    FreqStack() {
        maxFreq = 0;
    }
    
    void push(int val) {
        freq[val]++;
        if (freq[val] > maxFreq) maxFreq = freq[val];
        arr[freq[val]].push(val);
    }
    
    int pop() {
        int res = arr[maxFreq].top();
        freq[res]--;
        arr[maxFreq].pop();
        if (arr[maxFreq].empty())
            maxFreq--;
        return res;
    }
};

int main(){
    
}