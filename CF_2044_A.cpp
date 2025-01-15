// https://codeforces.com/contest/2044/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc = 0;
    cin >> tc;
    while(tc--) {
        int n = 0, count = 0, i = 1;
        cin >> n;
        while(n - i > 0) {
            count++;
            i++;
        }
        cout << count << endl;
    }
    return 0;
}