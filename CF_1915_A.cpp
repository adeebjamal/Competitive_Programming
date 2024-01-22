#include<bits/stdc++.h>
using namespace std;
void solve() {
    int a = 0, b = 0, c = 0;
    cin>>a>>b>>c;
    if(a == b) {
        cout<<c<<endl;
    }
    else if(b == c) {
        cout<<a<<endl;
    }
    else {
        cout<<b<<endl;
    }
}
int main() {
    int tc = 0;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}