#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int total=0, buns=0, days=0;
        cin>>total>>buns>>days;
        int daily=buns*5;
        cout<<total/daily + days<<endl;
    }
    return 0;
}