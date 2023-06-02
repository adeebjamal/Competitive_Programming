#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int curr_ct=0, len=0, answer=INT_MIN;
        cin>>len;
        for(int i=0; i<len; i++) {
            int num=0;
            cin>>num;
            if(num==0) {
                curr_ct++;
            }
            else {
                answer=max(answer,curr_ct);
                curr_ct=0;
            }
        }
        cout<<max(answer,curr_ct)<<endl;
    }
    return 0;
}