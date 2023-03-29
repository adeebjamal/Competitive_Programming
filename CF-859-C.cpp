#include<bits/stdc++.h>
using namespace std;
string solve() {
    int len=0;
    string str="";
    cin>>len>>str;
    unordered_map<char,vector<int>> mp;
    for(int i=0; i<len; i++) {
        mp[str[i]].push_back(i);
    }
    for(char c='a'; c<='z'; c++) {
        int size=mp[c].size();
        if(size>1) {
            for(int i=0; i<size-1; i++) {
                if((mp[c][i+1] - mp[c][i])%2==1) {
                    return "NO";
                }
            }
        }
    }
    return "YES";
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}