#include <iostream>
using namespace std;
long long n,a[200005],q,sum=0,pref[200005],t;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>t;
    while(t--)
    {
        sum = 0;
        cin >> n >> q;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            sum+=a[i];
            pref[i]=pref[i-1];
            pref[i]+=a[i];
        }
        for(int i = 0; i < q; i++){
            long long l,r,k;
            cin >> l >> r >> k;
            long long ans = pref[n]-(pref[r]-pref[l-1])+k*(r-l+1);
            if(ans%2==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int tc=0;
//     cin>>tc;
//     while(tc--) {
//         int len=0, query=0;
//         cin>>len>>query;
//         long long int sum=0;
//         vector<long long int> nums;
//         for(int i=0; i<len; i++) {
//             int x=0;
//             cin>>x;
//             sum+= x;
//             nums.push_back(sum);
//         }
//         for(int i=0; i<query; i++) {
//             int l=0, r=0, k=0;
//             cin>>l>>r>>k;
//             long long int total=nums.back();
//             total-= nums[r];
//             if(l-1>=0) {
//                 total+= nums[l-1];
//             }
//             total+= (r-l+1)*k;
//             cout<<total<<" ";
//             if(total%2==1) {
//                 cout<<"YES"<<endl;
//             }
//             else {
//                 cout<<"NO"<<endl;
//             }
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int tc=0;
//     cin>>tc;
//     while(tc--) {
//         int len=0, query=0;
//         cin>>len>>query;
//         long long int sum=0;
//         vector<long long int> nums;
//         for(int i=0; i<len; i++) {
//             int x=0;
//             cin>>x;
//             sum+= x*1LL;
//             nums.push_back(sum);
//         }
//         for(int i=0; i<query; i++) {
//             int left=0, right=0, k=0;
//             cin>>left>>right>>k;
//             long long int total=nums.back();
//             total-= nums[right];
//             if(left-1>=0) {
//                 total+= nums[left-1];
//             }
//             total+= (right-left+1)*k;
//             if(total%2==1) {
//                 cout<<"YES"<<endl;
//             }
//             else {
//                 cout<<"NO"<<endl;
//             }
//         }
//     }
//     return 0;
// }