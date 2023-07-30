#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int a=0, b=0, c=0;
        cin>>a>>b>>c;
        if(a+b >= 10 or b+c >= 10 or a+c >= 10) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}