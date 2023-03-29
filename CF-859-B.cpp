#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        cin>>len;
        int even=0, odd=0;
        while(len--) {
            int temp=0;
            cin>>temp;
            if(temp%2==0) {
                even+= temp;
            }
            else {
                odd+= temp;
            }
        }
        if(even>odd) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}