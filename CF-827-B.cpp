#include<bits/stdc++.h>
using namespace std;
string solve() {
    int len=0;
    cin>>len;
    vector<int> vec;
    for(int i=0; i<len; i++) {
        int num=0;
        cin>>num;
        vec.push_back(num);
    }
    unordered_map<int,int> mp;
    for(int& num: vec) {
        mp[num]++;
        if(mp[num] > 1) return "NO";
    }
    return "YES";
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}