#include<bits/stdc++.h>
using namespace std;
string solve() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    if(a < b and b < c) {
        return "STAIR";
    }
    else if(a < b and b > c) {
        return "PEAK";
    }
    return "NONE";
}
int main() {
    int tc = 0;
    cin >> tc;
    while(tc--) {
        cout << solve() << endl;
    }
    return 0;
}