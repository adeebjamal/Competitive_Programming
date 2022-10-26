#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n=0;
    cin>>n;
    unordered_map<string,unordered_set<int>> mp;
    for(int i=0; i<3; i++) {
        for(int j=0; j<n; j++) {
            string str="";
            cin>>str;
            mp[str].insert(i);
        }
    }
    unordered_map<int,int> temp;
    for(auto& itr: mp) {
        if(itr.second.size() == 1) {
            for(auto it=itr.second.begin(); it != itr.second.end(); it++) {
                temp[*it]+= 3;
            }
        }
        else if(itr.second.size() == 2) {
            for(auto it=itr.second.begin(); it != itr.second.end(); it++) {
                temp[*it]+= 1;
            }
        }
    }
    cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<endl;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}