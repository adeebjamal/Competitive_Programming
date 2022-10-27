#include<bits/stdc++.h>
using namespace std;
char solve() {
    vector<vector<char>> grid;
    vector<int> R;
    for(int i=0; i<8; i++) {
        vector<char> row;
        for(int j=0; j<8; j++) {
            char ch=' ';
            cin>>ch;
            row.push_back(ch);
            if(ch=='R') R.push_back(i);
        }
        grid.push_back(row);
    }
    for(int& row: R) {
        bool ok=true;
        for(int j=0; j<8; j++) {
            if(grid[row][j] == 'B') {
                ok=false;
                break;
            }
        }
        if(ok) return 'R';
    }
    return 'B';
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}