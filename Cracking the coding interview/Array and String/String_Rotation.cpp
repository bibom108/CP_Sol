/*
    Question: Given function isSubtring to check if s1 is substring of s2. isSubstring can be called 1 time.
    Write code to check if s2 is a rotation of s1.
    Input: waterbottle
    Output: erbottlewat
    More:
*/

// White board part
/*
Sol1: Ghép 2 chuỗi s1 thành 1 chuỗi, gọi isSubstring(s1s1, s2)
Space: 0(1)
Time: 0n

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubstring(string a, string b){       // if a is substr of b
        for (int i = 0; i < b.length(); i++){
            if (a[0] == b[i]){
                int check = 1;
                for (int j = 0; j < a.length(); j++){
                    if (a[j] != b[i+j]){
                        check = 0;
                        break;
                    }
                }
                if (check)
                    return true;
            }
        }      
        return false;
    }
    
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;
        string tmp = s+s;
        return isSubstring(goal, tmp);
    }
};

int main(){
    
}