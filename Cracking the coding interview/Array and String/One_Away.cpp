/*
    Question:  Given 2 string, check if they are 1 or 0 edit (insert a char, 
    remove a char, replace a char) from each other.
    Input: pale, ple / pales, pale / pale, bale / pale, bake
    Output: true / true / true / false
    More:
*/

// White board part
/*
Sol1: Check 2 string length, we now have 3 case (string1 <= string2)
+ Same length: loop through whole string, check if 1 or 0 different.
+ string2 - string1 = 1: loop through string, skip first different, check the rest with no different allow.
Space: 0n
Time: 01

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

bool Sol1(string s1, string s2){
    if (s1.length() > s2.length()){
        swap(s1, s2);
    }
    if (s2.length() - s1.length() <= 1){
        int i = 0;
        int j = 0;
        int diff = 0;
        while (i < s1.length() && j < s2.length()){
            if (s1[i] != s2[j]){
                diff++;
                if (s2.length() - s1.length() == 1) j++;
                else {
                    i++;
                    j++;
                }
            }
            else {
                i++;
                j++;
            }
            if (diff == 2)
                return false;
        }
        return true;
    } 
    else {
        return false;
    }
}

int main(){
    cout << Sol1("pale", "bake");
}