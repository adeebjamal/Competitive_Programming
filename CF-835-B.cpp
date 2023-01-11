#include<bits/stdc++.h>
using namespace std;
void solve() {
    int len=0, maxi=INT_MIN;
    cin>>len;
    string str="";
    cin>>str;
    for(char& ch: str) {
        maxi=max(maxi,ch-'a');
    }
    cout<<++maxi<<endl;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}