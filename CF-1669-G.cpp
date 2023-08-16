#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<char>>& grid, int& startRow, int& startCol, int& row) {
    int answer=startRow;
    while(true) {
        if(answer + 1 < row) {
            if(grid[answer+1][startCol] == '.') {
                answer++;
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    return answer;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int row=0, col=0;
        cin>>row>>col;
        vector<vector<char>> grid;
        for(int i=0; i<row; i++) {
            vector<char> temp;
            for(int j=0; j<col; j++) {
                char x='a';
                cin>>x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }
        for(int i=row-1; i>=0; i--) {
            for(int j=0; j<col; j++) {
                if(grid[i][j] == '*') {
                    int final=solve(grid,i,j,row);
                    swap(grid[i][j],grid[final][j]);
                }
            }
        }
        for(vector<char>& row: grid) {
            for(char& ch: row) {
                cout<<ch;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}