#include<bits/stdc++.h>
using namespace std;
void solve() {
    int len=0;
    cin>>len;
    vector<int> a;
    for(int i=0; i<len; i++) {
        int num=0;
        cin>>num;
        a.push_back(num);
    }
    vector<int> b(a);
    sort(b.begin(),b.end());
    for(int i=0; i<len; i++) {
        if(a[i] == b[len-1]) {
            cout<<a[i]-b[len-2]<<" ";
        }
        else {
            cout<<a[i]-b[len-1]<<" ";
        }
    }
    cout<<endl;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}