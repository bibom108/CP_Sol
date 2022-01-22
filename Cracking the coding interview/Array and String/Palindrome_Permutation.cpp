/*
    Question:  Given a string, check if it is permutation of panlindrome
    Input: "Tact Coa"
    Output: True
    More: Not case sensitive, dont care about space
*/

// White board part
/*
Sol1: Erase white space, transfer all to lower case, check each character freq, a panlindrome has at most 1 odd freq.
Space: 0n
Time: 0n
map <char, int> mm;
for (int i = 0; i < str.length(); i++){
    if (str[i] == ' '){
        str.erase(i, 1);
        i--;
    }
    else {
        str[i] = tolower(str[i]);
    }
    mm[str[i]]++;
}
int cnt = 0;
for (int i = 0; i < str.length(); i++){
    if (mm[str[i]] % 2 == 1){
        cnt ++;
        if (cnt == 2) return False;
    }
}
return True;

Sol2: We only care about the last count, so each character start from state of 0 mean even, toggle to 1 and then 0 again
when meet that same character. Then check if final bit vector have at most one bit 1.
Space: 01
Time: 0n
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

bool Sol1(string str){
    map <char, int> mm;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == ' '){
            str.erase(i, 1);
            i--;
        }
        else {
            str[i] = tolower(str[i]);
            mm[str[i]]++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < str.length(); i++){
        if (mm[str[i]] % 2 == 1){
            cnt ++;
            if (cnt == 2) return 0;
        }
    }
    return 1;
}

bool Sol2(string str) {
    int res = 0;
    for (int i = 0; i < str.length(); i++){
        int cur = 1 << (int(str[i]) - 96);
        if (cur & res == 0){
            res = cur | res;
        }
        else {
            res = res & (~cur);
        }
    }
    return res == 0 || (res & (res - 1) == 0);
}

int main(){
    cout << Sol2("Tact Coa");
}