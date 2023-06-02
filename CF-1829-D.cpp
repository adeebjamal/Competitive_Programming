#include<bits/stdc++.h>
using namespace std;
string ok(int n, int m) {
    if(n == m) {
        return "YES";
    }
    if(n%3 != 0) {
        return "NO";
    }
    if(ok(n/3,m) == "YES") {
        return "YES";
    }
    if(ok(2*n/3,m) == "YES") {
        return "YES";
    }
    return "NO";
}
string solve() {
    int n=0, m=0;
    cin>>n>>m;
    return ok(n,m);
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}