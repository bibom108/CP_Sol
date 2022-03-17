/*
    Question: https://leetcode.com/problems/group-anagrams/
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Loop thru the vector of string, sort each string and check hashmap of position
of it.
Time: 0(n*m*logm)
Space: 0(n)

Sol2: Loop thru the vector of string, store each string freq and check hashmap of position
of it.
Time: 0(n*m)
Space: 0(n)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution2 {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector <string>> res;
        unordered_map <string, int> mm;
        for (int i = 0; i < strs.size(); i++) {
            string x(26, 0);
            for (int j = 0; j < strs[i].length(); j++) {
                x[strs[i][j] - 'a']++;
            }
            
            if (mm[x]) {
                res[mm[x]-1].push_back(strs[i]);
            }
            else {
                mm[x] = res.size() + 1;
                vector <string> tmp = {strs[i]};
                res.push_back(tmp);
            }
        }
        return res;
    }
};

class Solution1 {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector <string>> res;
        unordered_map <string, int> mm;
        for (int i = 0; i < strs.size(); i++) {
            string sorted = strs[i]; 
            sort(sorted.begin(), sorted.end());
            if (mm[sorted]) {
                res[mm[sorted]-1].push_back(strs[i]);
            }
            else {
                mm[sorted] = res.size() + 1;
                vector <string> tmp = {strs[i]};
                res.push_back(tmp);
            }
        }
        return res;
    }
};

int main(){
    
}