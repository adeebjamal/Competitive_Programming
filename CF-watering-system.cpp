#include<bits/stdc++.h>
using namespace std;
int main() {
    int len=0, total=0, required=0, sum=0, ans=0;
    cin>>len>>total>>required;
    vector<int> holes;
    for(int i=0; i<len; i++) {
        int x=0;
        cin>>x;
        holes.push_back(x);
        sum+= x;
    }
    sort(holes.begin()+1, holes.end());
    for(int i=len-1; i>=1; i--) {
        if(1.0*holes[0]*total/sum*1.0 < required) {
            sum-= holes[i];
            ans++;
        }
        else {
            break;
        }
    }
    cout<<ans;
    return 0;
}