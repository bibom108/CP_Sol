/*
    Question: https://leetcode.com/problems/generate-parentheses/
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Using backtracking, generate all possible paren and check if it is valid (lazy solution)
Time: 0(n*4^n)
Space: 0(n)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    vector <string> res;
    string cur = "";
    bool is_valid(string s){
        stack <char> ss;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(')
                ss.push(s[i]);
            else {
                if (ss.empty() || ss.top() != '(')
                    return false;
                else ss.pop();
            }
        }
        if (ss.empty())
            return true;
        return false;
    }
    
    void helper(int o, int c) {
        if (o == 0 && c == 0){
            if (is_valid(cur))
                res.push_back(cur);
            return;
        }
        if (o) {
            cur += '(';
            helper(o-1, c);
            cur.pop_back();
        }
        if (c) {
            cur += ')';
            helper(o, c-1);
            cur.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        helper(n, n);
        return res;
    }
};

int main(){
    
}