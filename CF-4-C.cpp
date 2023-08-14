#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> mp;
string solve() {
    string str="";
    cin>>str;
    if(mp[str] == 0) {
        mp[str]++;
        return "OK";
    }
    string answer = str + to_string(mp[str]++);
    mp[answer]++;
    return answer;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}