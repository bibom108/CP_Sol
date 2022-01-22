/*
    Question:  Write a method to replace all spaces in a string with '%20'
    Input: "Mr John Smith      ", 13
    Output: "Mr%20John%20Smith"
    More:
*/

// White board part
/*
Sol1: Brute Force, loop through the array, check if there is any space, if there is one, replace
space with '%20', move the other part of string and repeat
Space: 01
Time: On^2
for (int i = 1; i < n; i++)
    if str[i] == ' '
        for (int j = n+1; j >= i+3; j--)
            str[j] = str[j-2]
        str[i] = '%'
        str[i+1] = '2'
        str[i+2] = '0'

Sol2: Begin at the end, loop to the begin of array, move character to back
Space: 01
Time: 0n
int size = str.length()
int i = n-1;
int j = size-1;
while (i >= 0)
    if str[i] == ' ' && i > 0
        str[i] = str[i-1]
        str[j--] = '0'
        str[j--] = '2'
        str[j--] = '%'
    else if str[i] == ' '
        str.erase(0)
    else
        str[j--] = str[i--]
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;
vector <char> sol1(vector <char> str, int n){
    int cur = n;
    for (int i = 1; i < n; i++){
        if (str[i] == ' '){
            for (int j = cur+1; j >= i+3; j--)
                str[j] = str[j-2];
            cur = cur + 2;
            str[i] = '%';
            str[i+1] = '2';
            str[i+2] = '0';
        }
    }
    return str;
}

vector <char> sol2(vector <char> str, int n){
    int size = str.size();
    int i = n-1;
    int j = size-1;
    while (i >= 0)
        if (str[i] == ' ' && i > 0){
            str[j--] = '0';
            str[j--] = '2';
            str[j--] = '%';
            i--;
        }
        else if (str[i] == ' '){
            str.erase(str.begin());
        }
        else {
            str[j--] = str[i--];
        }
    return str;
}

int main(){
    vector <char> str = {'M','r',' ','J','o','h','n',' ','S','m','i','t','h',' ',' ',' ',' '};
    str = sol2(str, 13);
    for (int i = 0; i < str.size(); i++){
        cout << str[i];
    }
}