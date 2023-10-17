#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n = 0, m = 0, answer = 0;
    cin>>n>>m;
    string str1 = "", str2 = "";
    cin>>str1>>str2;
    for(int operation=0; operation<6; operation++) {
        if(str1.find(str2) != -1) {
            return operation;
        }
        str1+= str1;
    }
    return -1;
}
int main() {
    int tc = 0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}