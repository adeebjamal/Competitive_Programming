// https://codeforces.com/contest/2044/problem/B
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc = 0;
    cin >> tc;
    unordered_map<char, char> hash;
    hash['p'] = 'q';
    hash['q'] = 'p';
    hash['w'] = 'w';
    while(tc--) {
        string str = "";
        cin >> str;
        reverse(str.begin(), str.end());
        for(const char& letter: str) {
            cout << hash[letter];
        }
        cout << endl;
    }
    return 0;
}