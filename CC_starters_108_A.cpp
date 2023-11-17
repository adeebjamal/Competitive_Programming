#include<bits/stdc++.h>
using namespace std;
int main() {
    int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
    cin>>a1>>b1;
    cin>>a2>>b2;
    if(a2 + a1 > b2 + b1) {
        cout<<"Dominater"<<endl;
    }
    else {
        cout<<"Everule"<<endl;
    }
    return 0;
}