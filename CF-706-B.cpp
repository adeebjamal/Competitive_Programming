#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int x=0;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    int q=0;
    cin>>q;
    while(q--) {
        int m=0;
        cin>>m;
        cout<<upper_bound(vec.begin(),vec.end(),m)-vec.begin()<<endl;
    }
    return 0;
}