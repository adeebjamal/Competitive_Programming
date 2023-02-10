#include<bits/stdc++.h>
using namespace std;
void solve() {
    int len=0;
    cin>>len;
    vector<int> odd,even;
    for(int i=1; i<=len; i++) {
        int num=0;
        cin>>num;
        if(num % 2 == 0) {
            even.push_back(i);
        }
        else {
            odd.push_back(i);
        }
    }
    if(odd.size() >= 3) {
        cout<<"YES"<<endl;
        cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
    }
    else if(odd.size()>=1 and even.size()>=2) {
        cout<<"YES"<<endl;
        cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}