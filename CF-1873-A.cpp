#include<bits/stdc++.h>
using namespace std;
string solve(string& str) {
    string copy = str;
    if(copy == "abc") {
        return "YES";
    }
    swap(copy[0],copy[1]);
    if(copy == "abc") {
        return "YES";
    }
    copy = str;
    swap(copy[1],copy[2]);
    if(copy == "abc") {
        return "YES";
    }
    copy = str;
    swap(copy[0],copy[2]);
    if(copy == "abc") {
        return "YES";
    }
    return "NO";
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        string str="";
        cin>>str;
        cout<<solve(str)<<endl;
    }
    return 0;
}