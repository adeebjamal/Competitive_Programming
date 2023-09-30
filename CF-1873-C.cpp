#include<bits/stdc++.h>
using namespace std;
vector<string> board = {
    "1111111111",
    "1222222221",
    "1233333321",
    "1234444321",
    "1234554321",
    "1234554321",
    "1234444321",
    "1233333321",
    "1222222221",
    "1111111111"
};
int solve() {
    int answer = 0;
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            char ch=' ';
            cin>>ch;
            if(ch == 'X') {
                answer+= (board[i][j] - '0');
            }
        }
    }
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