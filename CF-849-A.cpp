#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    string str="codeforces";
    while(tc--) {
        string letter="";
        cin>>letter;
        if(str.find(letter) != -1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}