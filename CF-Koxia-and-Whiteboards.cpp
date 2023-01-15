#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n=0, m=0;
    cin>>n>>m;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0; i<n; i++) {
        int num=0;
        cin>>num;
        pq.push(num);
    }
    while(m--) {
        int num=0;
        cin>>num;
        pq.pop();
        pq.push(num);
    }
    long long int sum=0;
    while(!pq.empty()) {
        sum+= pq.top();
        pq.pop();
    }
    cout<<sum<<endl;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}