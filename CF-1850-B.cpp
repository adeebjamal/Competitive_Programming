#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n=0;
    cin>>n;
    int winner=0, maxi=INT_MIN;
    for(int i=1; i<=n; i++) {
        int words=0, quality=0;
        cin>>words>>quality;
        if(words > 10) {
            continue;
        }
        if(quality > maxi) {
            winner=i;
            maxi=quality;
        }
    }
    return winner;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}