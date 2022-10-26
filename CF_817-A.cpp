#include<bits/stdc++.h>
using namespace std;
string solve(string& name, string& temp) {
    sort(temp.begin(),temp.end());
    if(name == temp) {
        return "YES";
    }
    return "NO";
}
int main() {
    string str="Timur";
    sort(str.begin(),str.end());
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        cin>>len;
        string temp="";
        cin>>temp;
        cout<<solve(str,temp)<<endl;
    }
    return 0;
}