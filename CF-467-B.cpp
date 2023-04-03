#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0, m=0, k=0;
    cin>>n>>m>>k;
    vector<int> nums;
    for(int i=0; i<m+1; i++) {
        int x=0;
        cin>>x;
        nums.push_back(x);
    }
    int answer=0;
    for(int i=0; i<m; i++) {
        if(__builtin_popcount(nums[i] ^ nums.back()) <= k) {
            answer++;
        }
    }
    cout<<answer;
    return 0;
}