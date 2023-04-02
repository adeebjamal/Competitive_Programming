#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0, x=0, answer=0;
    cin>>n>>x;
    for(int i=1; i<=n; i++) {
        if(x/i == (x*1.0)/(i*1.0) and x/i <= n) {
            answer++;
        }
    }
    cout<<answer;
    return 0;
}