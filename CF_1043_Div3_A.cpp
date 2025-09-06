// https://codeforces.com/contest/2132/problem/A
#include<bits/stdc++.h>
using namespace std;

string solve() {
    string a = "", b = "", c = "", start = "", end = "";
    int lenA = 0, lenB = 0;
    cin >> lenA;
    cin >> a;
    cin >> lenB;
    cin >> b;
    cin >> c;
    for(int i = 0; i < lenB; i++) {
        if(c[i] == 'D') {
            end.push_back(b[i]);
        }
        else {
            start.push_back(b[i]);
        }
    }
    reverse(start.begin(), start.end());
    return start + a + end;
}

int main() {
    int tc = 0;
    cin >> tc;
    while(tc--) {
        cout << solve() << endl;
    }
    return 0;
}