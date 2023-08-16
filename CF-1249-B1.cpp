#include<bits/stdc++.h>
using namespace std;
int solve(unordered_map<int,int>& adj, int& source) {
    int days=1, current=adj[source];
    while(current != source) {
        current=adj[current];
        days++;
    }
    return days;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        cin>>len;
        unordered_map<int,int> adj;
        for(int i=1; i<=len; i++) {
            cin>>adj[i];
        }
        for(int source=1; source<=len; source++) {
            cout<<solve(adj,source)<<" ";
        }
        cout<<endl;
    }
    return 0;
}