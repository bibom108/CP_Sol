/*
    Question: Given adj list, check if there is path between source and destination
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: Using BFS or DFS
Space: 0(n)
Time: 0(n^3)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector <int> visited(n, 0);
        queue <int> cur;
        cur.push(source);
        visited[source] = 1;
        while (cur.size() != 0){
            for (int i = 0; i < cur.size(); i++){
                if (cur.front() == destination)
                    return true;
                for (int j = 0; j < edges.size(); j++){
                    if (edges[j][0] == cur.front() && visited[edges[j][1]] == 0){
                        cur.push(edges[j][1]);
                        visited[edges[j][1]] = 1;
                    }
                    if (edges[j][1] == cur.front() && visited[edges[j][0]] == 0){
                        cur.push(edges[j][0]);
                        visited[edges[j][0]] = 1;
                    }
                }
                cur.pop();
            }
        }
        return false;
    }
};

int main(){
    
}