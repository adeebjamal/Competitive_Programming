#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n=0, k=0;
    cin>>n>>k;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int x=0;
        cin>>x;
        vec.push_back(x);
    }
    if(n == 1) {
        return 0;
    }
    sort(vec.begin(),vec.end());
    vector<vector<int>> valid;
    vector<int> temp;
    temp.push_back(vec[0]);
    for(int i=1; i<n; i++) {
        if(vec[i]-temp.back() <= k) {
            temp.push_back(vec[i]);
        }
        else {
            valid.push_back(temp);
            temp={};
            temp.push_back(vec[i]);
        }
    }
    if(!temp.empty()) {
        valid.push_back(temp);
    }
    int maxi=INT_MIN;
    for(vector<int>& row: valid) {
        int curr_len=row.size();
        maxi=max(maxi,curr_len);
    }
    return n-maxi;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}