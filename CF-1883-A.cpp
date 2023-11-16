#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc = 0;
    cin>>tc;
    string keypad = "1234567890";
    unordered_map<char,int> mp;
    for(int i = 0; i < 10; i++) {
        mp[keypad[i]] = i;
    }
    while(tc--) {
        string password = "";
        cin>>password;
        int answer = 0;
        answer += abs(mp['1'] - mp[password[0]]);
        answer++;
        answer += abs(mp[password[0]] - mp[password[1]]);
        answer++;
        answer += abs(mp[password[1]] - mp[password[2]]);
        answer++;
        answer += abs(mp[password[2]] - mp[password[3]]);
        answer++;
        cout<<answer<<endl;
    }
    return 0;
}