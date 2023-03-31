#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b) {
    return b<a;
}
int main() {
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n,comp);
    int total=accumulate(arr,arr+n,0), answer=0, curr_sum=0;
    for(int i=0; i<n; i++) {
        curr_sum+= arr[i];
        answer++;
        if(curr_sum>total/2) {
            break;
        }
    }
    cout<<answer;
    return 0;
}