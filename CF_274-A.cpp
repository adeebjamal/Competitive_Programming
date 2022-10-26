#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    priority_queue<int> pq;
    pq.push(arr[0] + arr[1] * arr[2]);
    pq.push(arr[0] * (arr[1] + arr[2]));
    pq.push(arr[0]*arr[1]*arr[2]);
    pq.push((arr[0]+arr[1])*arr[2]);
    cout<<pq.top();
    return 0;
}