#include<bits/stdc++.h>
using namespace std;
int solve() {
    int len = 0, product = 1, zeros = 0;
    cin>>len;
    vector<int> nums;
    for(int i=0; i<len; i++) {
        int x=0;
        cin>>x;
        nums.push_back(x);
        if(x != 0) {
            product*= x;
        }
        else if(x == 0) {
            zeros++;
        }
    }
    if(zeros > 1) {
        return 0;
    }
    else if(zeros == 1) {
        return product;
    }
    vector<int> products(len,-1);
    for(int i=0; i<len; i++) {
        if(nums[i] == 0) {
            continue;
        }
        products[i] = product / nums[i];
    }
    int answer = INT_MIN;
    for(int i=0; i<len; i++) {
        if(nums[i] == 0) {
            return product;
        }
        answer = max(answer, products[i]*(nums[i]+1));
    }
    return answer;
}
int main() {
    int tc=0;
    cin>>tc;
    int n=pow(9,9);
    while(tc--) {
        cout<<solve()<<endl;
    }
}