#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n=0, d=0;
    cin>>n>>d;
    string str="";
    cin>>str;
    bool done=true;
    for(int i=0; i<n; i++) {
        if(str[i]-'0' >= d) {
            cout<<str[i];
        }
        else {
            cout<<d;
            for(int j=i; j<n; j++) {
                cout<<str[j];
            }
            cout<<endl;
            return;
        }
    }
    cout<<d<<endl;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}