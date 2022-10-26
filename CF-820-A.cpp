#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int a=0, b=0, c=0;
        cin>>a>>b>>c;
        int t1=abs(a-1), t2=abs(b-c) + abs(c-1);
        if(t1==t2) {
            cout<<3<<endl;
        }
        else if(t1<t2) {
            cout<<1<<endl;
        }
        else {
            cout<<2<<endl;
        }
    }
    return 0;
}