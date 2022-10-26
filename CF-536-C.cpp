#include<bits/stdc++.h>
using namespace std;
void solve() {
    int len=0;
    cin>>len;
    int arr[len];
    for(int i=0; i<len; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+len);
    int start=0, end=len-1;
    long long int sum=0;
    while(start<end) {
        sum+= ((arr[start]+arr[end])*1LL)*((arr[start]+arr[end])*1LL);
        start++;
        end--;
    }
    cout<<sum<<endl;
}
int main() {
    solve();
    return 0;
}