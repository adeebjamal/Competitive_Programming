#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        string str="", ans="";
        cin>>len>>str;
        int i=len-1;
        while(i>=0) {
            if(str[i] != '0') {
                ans.push_back(str[i]-'0'-1+'a');
                i--;
            }
            else {
                ans.push_back(stoi(str.substr(i-2,2))-1+'a');
                i-=3;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}