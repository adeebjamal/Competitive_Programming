#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        vector<vector<char>> grid(8,vector<char>(8,'.'));
        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                cin>>grid[i][j];
            }
        }
        for(int col=0; col<8; col++) {
            for(vector<char>& row: grid) {
                if(row[col] != '.') {
                    cout<<row[col];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}