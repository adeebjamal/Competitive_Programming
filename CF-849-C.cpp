#include<bits/stdc++.h>
using namespace std;
void solve() {
    int len=0;
    string str="";
    cin>>len>>str;
    int start=0, end=len-1, answer=len;
    while(str[start] != str[end] and answer > 0) {
        start++;
        end--;
        answer-= 2;
    }
    cout<<answer<<endl;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}