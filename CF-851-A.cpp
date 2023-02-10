#include<bits/stdc++.h>
using namespace std;
int solve() {
    int len=0,twos=0;
    cin>>len;
    vector<pair<int,int>> vec;
    for(int i=0; i<len; i++) {
        int num=0;
        cin>>num;
        twos+= (num==2);
        vec.push_back({num,twos});
    }
    for(int index=0; index<len; index++) {
        if(vec[index].second == twos-vec[index].second) {
            return index+1;
        }
    }
    return -1;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}