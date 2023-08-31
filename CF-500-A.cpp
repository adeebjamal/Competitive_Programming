#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0, t=0;
    cin>>n>>t;
    unordered_map<int,vector<int>> graph;
    for(int i=1; i<=n; i++) {
        int ai=0;
        cin>>ai;
        graph[i].push_back(i+ai);
    }
    vector<bool> visited(n+1,false);
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(int& neighbour: graph[node]) {
            if(neighbour == t) {
                cout<<"YES";
                return 0;
            }
            if(visited[neighbour] == false) {
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }
    cout<<"NO";
    return 0;
}