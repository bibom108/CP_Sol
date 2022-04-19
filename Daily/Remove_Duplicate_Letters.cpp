/*
    Question: https://leetcode.com/problems/remove-duplicate-letters/
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Store last index of a character, visited vector. Loop thru the string, check if the current char
is less than top char or not, if less than, remove until top character equal or greater than, then push
current character in stack. Repeat.
Time: 0(N)
Space: 0(N)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        map <char, int> mm;
        for (int i = 0; i < s.length(); i++) 
            mm[s[i]] = i;
        stack <char> ss;
        vector <int> visited(26, 0);
        ss.push(s[0]);
        visited[s[0] - 'a'] = 1;
        for (int i = 1; i < s.length(); i++) { 
            int flag = 0; 
            while (!ss.empty() && ss.top() > s[i] && mm[ss.top()] > i && visited[s[i] - 'a'] == 0) {
                flag = 1;
                visited[ss.top() - 'a'] = 0;
                ss.pop();
            }
            if (visited[s[i] - 'a'] == 0 || flag) {
                ss.push(s[i]);
                visited[s[i] - 'a'] = 1;
            }
        }
        string res = "";
        while (!ss.empty()){
            res = ss.top() + res;
            ss.pop();
        }
        return res;
    }
};

int main(){
    
}