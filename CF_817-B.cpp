#include<bits/stdc++.h>
using namespace std;
auto solve() {
    int len=0;
    cin>>len;
    string one="", two="";
    cin>>one>>two;
    if(one == two) {
        return "YES";
    }
    for(int i=0; i<len; i++) {
        if(one[i] == two[i]) continue;
        else if(one[i] == 'G' and two[i] == 'B') continue;
        else if(one[i] == 'B' and two[i] == 'G') continue;
        return "NO";
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