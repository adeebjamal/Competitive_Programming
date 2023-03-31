#include<bits/stdc++.h>
using namespace std;
string solve(string& str) {
    int curr_ct=1;
    for(int i=0; i<str.length()-1; i++) {
        if(str[i]==str[i+1]) {
            curr_ct++;
        }
        else {
            curr_ct=1;
        }
        if(curr_ct>=7) {
            return "YES";
        }
    }
    return "NO";
}
int main() {
    string str="";
    cin>>str;
    cout<<solve(str)<<endl;
}