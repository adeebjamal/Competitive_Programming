#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int a=0, b=0, c=0;
        cin>>a>>b>>c;
        if(a+b == c) {
            cout<<'+'<<endl;
        }
        else {
            cout<<'-'<<endl;
        }
    }
    return 0;
}