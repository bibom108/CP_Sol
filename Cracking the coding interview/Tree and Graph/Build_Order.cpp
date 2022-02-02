/*
    Question: https://leetcode.com/problems/course-schedule-ii/
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Convert the pre 2d vector into the adjency matrix, loop thru the matrix to find the node that has
no pre condition, push it to the result vector, loop thru the matrix to delete that node in the pre condition,
repeat the process until the result length equal to number of course.
Space: 0(n^2)
Time: 0(n^3)

Sol2: Similar to Sol1, but we use a queue to transvel thru node, and delete each front element in the adj matrix.
Space: 0(V+E)
Time: 0(V+E)

Sol3: Using DFS to implement normal topo
Space: 0(V+E)
Time: 0(V+E)
*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    vector<int> findOrder(int course, vector<vector<int>>& pre) {
        map <int, set <int>> mm;
        for (int i = 0; i < pre.size(); i++){
            mm[pre[i][0]].insert(pre[i][1]);
        } 
        vector <int> res;
        for (int i = 0; i < course; i++){
            if (mm[i].size() == 0)
                res.push_back(i);
        }
        if (res.size() == 0)
            return res;
        while (res.size() != course){
            int check = 1;
            for (int i = 0; i < res.size(); i++){
                for (int j = 0; j < course; j++){
                    if (mm[j].size() != 0){
                        mm[j].erase(res[i]);
                        if (mm[j].size() == 0){
                            res.push_back(j);
                            check = 0;
                        }
                    }
                }
            }
            if (check)
                return {};
        }
        return res;
    }
};

class Solution2 {
public:
    vector<int> findOrder(int course, vector<vector<int>>& pre) {
        map <int, set <int>> mm;
        for (int i = 0; i < pre.size(); i++){
            mm[pre[i][0]].insert(pre[i][1]);
        }
        vector <int> res;
        queue <int> q;
        for (int i = 0; i < course; i++){
            if (mm[i].size() == 0)
                q.push(i);
        }
        while (!q.empty()){
            int cur = q.front(); q.pop();
            res.push_back(cur);
            for (int i = 0; i < course; i++){
                if (mm[i].size() != 0){
                    mm[i].erase(cur);
                    if (mm[i].size() == 0)
                        q.push(i);
                }
            }
        }
        if (res.size() == course)
            return res;
        else return {};
    }
};

class Solution3 {
public:
    vector <int> visited;
    vector <vector <int>> mm;
    stack <int> s;
    vector <int> res;
    bool dfs(int course){
        if (visited[course] == 1){
            return false;
        }
        visited[course] = 1;
        for (int i = 0; i < mm[course].size(); i++){
            if (visited[mm[course][i]] == 0){
                if (!dfs(mm[course][i]))
                    return false;
            }
            else if (visited[mm[course][i]] == 1)
                return false;
        }
        s.push(course);
        visited[course] = 2;
        return true;
    }
    vector<int> findOrder(int course, vector<vector<int>>& pre) {
        mm.resize(course);
        visited.resize(course, 0);
        for (int i = 0; i < pre.size(); i++){
            mm[pre[i][1]].push_back(pre[i][0]);
        }
        for (int i = 0; i < course; i++){
            if (visited[i] == 0){
                if (!dfs(i))
                    return {};
            }
        }
        for (int i = 0; i < course; i++){
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }
};

int main(){
    
}