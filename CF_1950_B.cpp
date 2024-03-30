#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n = 0;
    cin >> n;
    for(int i = 0; i < 2 * n; i++) {
        for(int j = 0; j < 2 * n; j++) {
            if((i / 2 + j / 2) & 1) {
                cout << ".";
            }
            else {
                cout << '#';
            }
        }
        cout << endl;
    }
}
int main() {
    int tc = 0;
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}