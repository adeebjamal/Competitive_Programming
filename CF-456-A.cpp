#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<pair<int,int>> vec;
    while(n--) {
        int a=0, b=0;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end());
    for(int i=0; i<vec.size()-1; i++) {
        if(vec[i].second > vec[i+1].second) {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}