#include<bits/stdc++.h>
using namespace std;
string solve() {
    int len=0;
    cin>>len;
    vector<int> nums, copy;
    for(int i=0; i<len; i++) {
        int num=0;
        cin>>num;
        nums.push_back(num);
        copy.push_back(num);
    }
    sort(copy.begin(),copy.end());
    for(int i=0; i<len; i++) {
        if(copy[i] % 2 != nums[i] % 2) {
            return "NO";
        }
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