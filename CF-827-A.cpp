#include<bits/stdc++.h>
using namespace std;
string solve() {
    int a=0, b=0, c=0;
    cin>>a>>b>>c;
    if(a==b+c) return "YES";
    else if(b==a+c) return "YES";
    else if(c==a+b) return "YES";
    return "NO";
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}