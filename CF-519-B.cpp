#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    unordered_map<int,int> mp1, mp2, mp3;
    vector<int> nums;
    for(int i=0; i<n; i++) {
        int num=0;
        cin>>num;
        mp1[num]++;
        nums.push_back(num);
    }
    for(int i=0; i<n-1; i++) {
        int num=0;
        cin>>num;
        mp2[num]++;
    }
    for(int i=0; i<n-2; i++) {
        int num=0;
        cin>>num;
        mp3[num]++;
    }
    for(int& num: nums) {
        if(mp1[num] > mp2[num]) {
            cout<<num<<endl;
            break;
        }
    }
    for(int& num: nums) {
        if(mp2[num] > mp3[num]) {
            cout<<num<<endl;
            break;
        }
    }
    return 0;
}