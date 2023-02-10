#include<bits/stdc++.h>
using namespace std;
string solve() {
    int len=0;
    string result = "NO", str="";
    cin>>len>>str;
    int x=0, y=0;
    for(char& letter: str) {
        if(letter == 'L') {
            x--;
        }
        else if(letter == 'R') {
            x++;
        }
        else if(letter == 'D') {
            y--;
        }
        else if(letter == 'U') {
            y++;
        }
        if(x == 1 and y == 1) {
            result = "YES";
        }
    }
    return result;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}