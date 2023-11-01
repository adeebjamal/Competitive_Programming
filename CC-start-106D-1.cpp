#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=0, b=0, c=0;
    cin>>a>>b>>c;
    if(max(a,max(b,c)) == a) {
        cout<<"YES";
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}