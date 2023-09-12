#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0, k=0;
    cin>>n>>k;
    vector<int> nums;
    for(int i=0; i<n; i++) {
        int num=0;
        cin>>num;
        nums.push_back(num);
    }
    int sum=INT_MAX, answer_index=0, current_sum=0;
    for(int i=0; i<min(n,k); i++) {
        current_sum+= nums[i];
    }
    if(current_sum < sum) {
        sum=current_sum;
        answer_index=0;
    }
    for(int i=k; i<n; i++) {
        current_sum+= nums[i];
        current_sum-= nums[i-k];
        if(current_sum < sum) {
            answer_index=i-k+1;
            sum=current_sum;
        }
    }
    cout<<answer_index+1;
    return 0;
}