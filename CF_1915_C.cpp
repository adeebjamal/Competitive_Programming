#include<bits/stdc++.h>
using namespace std;
string solve() {
    int n = 0;
    cin>>n;
    unsigned long long int sum = 0;
    for(int i = 0; i < n; i++) {
        int num = 0;
        cin>>num;
        sum += num;
    }
    double root = sqrt(sum);
    return int(root) == root ? "YES" : "NO";
}
int main() {
    int tc = 0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}