#include<bits/stdc++.h>
using namespace std;
void dfs(int& start, int& mini, unordered_map<int,vector<int>>& graph, unordered_map<int,int>& cost, vector<bool>& visited) {
    visited[start] = true;
    mini=min(mini,cost[start]);
    for(int& neighbour: graph[start]) {
        if(visited[neighbour] == false) {
            dfs(neighbour,mini,graph,cost,visited);
        }
    }
}
int main() {
    int number=0, pairs=0;
    cin>>number>>pairs;
    unordered_map<int,int> cost;
    for(int i=1; i<=number; i++) {
        cin>>cost[i];
    }
    unordered_map<int,vector<int>> graph;
    for(int i=0; i<pairs; i++) {
        int a=0, b=0;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<bool> visited(number+1,false);
    unsigned long long int answer=0;
    for(int i=1; i<=number; i++) {
        if(visited[i] == false) {
            int mini = INT_MAX;
            dfs(i,mini,graph,cost,visited);
            answer+= mini;
        }
    }
    cout<<answer;
    return 0;
}