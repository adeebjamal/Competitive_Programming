// A. Polycarp and the Day of Pi
#include<bits/stdc++.h>
using namespace std;
int solve() {
    string digits="", pi="31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    cin>>digits;
    int index=0;
    for(index=0; index<digits.length();index++) {
        if(digits[index] != pi[index]) {
            break;
        }
    }
    return index;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}