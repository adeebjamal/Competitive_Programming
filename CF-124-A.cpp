#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0, a=0, b=0;
    cin>>n>>a>>b;
    cout<<n-max(a+1,n-b)+1;
    return 0;
}