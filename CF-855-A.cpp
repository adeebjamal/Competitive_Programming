#include<bits/stdc++.h>
using namespace std;
string solve() {
    int len=0;
    cin>>len;
    string str="", result="";
    cin>>str;
    for(char& letter: str) {
        if(letter>='A' and letter<='Z') {
            letter = (letter-'A')+'a';
        }
        if(result.empty()) {
            result.push_back(letter);
        }
        else if(result.back() != letter) {
            result.push_back(letter);
        }
    }
    if(result == "meow") {
        return "YES";
    }
    return "NO";
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}