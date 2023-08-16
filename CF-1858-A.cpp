#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int a=0, b=0, c=0;
        cin>>a>>b>>c;
        if(c % 2 == 0) {
            if(a > b) {
                cout<<"First\n";
            }
            else {
                cout<<"Second\n";
            }
        }
        else {
            if(b > a) {
                cout<<"Second\n";
            }
            else {
                cout<<"First\n";
            }
        }
    }
    return 0;
}