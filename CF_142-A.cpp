#include<bits/stdc++.h>
using namespace std;
string solve(vector<pair<int,int>>& vec, int& strength) {
    for(pair<int,int>& temp: vec) {
        if(temp.first < strength) {
            strength+= temp.second;
        }
        else {
            return "NO";
        }
    }
    return "YES";
}
    int main() {
    int strength=0, n=0;
    cin>>strength>>n;
    vector<pair<int,int>> vec;
    for(int i=0; i<n; i++) {
        int x=0, y=0;
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    sort(vec.begin(),vec.end());
    cout<<solve(vec,strength);
    return 0;
}