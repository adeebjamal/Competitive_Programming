#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0, m=0;
    cin>>n>>m;
    char p[]={'B','W'};
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            char x=' ';
            cin>>x;
            if(x == '.') {
                cout<<p[(i+j)%2];
            }
            else {
                cout<<x;
            }
        }
        cout<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int n=0, m=0;
// int dr[]={-1,0,1,0};
// int dc[]={0,-1,0,1};
// void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<bool>>& vis) {
//     queue<vector<int>> q;       // {row,col,color};     INT_MAX ---> Black, INT_MIN ---> White
//     q.push({row,col,INT_MAX});
//     while(!q.empty()) {
//         vector<int> temp=q.front();
//         q.pop();
//         int curr_row=temp[0], curr_col=temp[1], curr_color=temp[2];
//         vis[curr_row][curr_col]=true;
//         if(curr_color==INT_MAX) {
//             grid[curr_row][curr_col]='B';
//         }
//         else {
//             grid[curr_row][curr_col]='W';
//         }
//         for(int i=0; i<4; i++) {
//             int nrow=curr_row+dr[i], ncol=curr_col+dc[i];
//             if(nrow>=0 and ncol>=0 and nrow<n and ncol<m) {
//                 if(grid[nrow][ncol] == '.' and vis[nrow][ncol] == false) {
//                     if(curr_color == INT_MAX) {
//                         q.push({nrow,ncol,INT_MIN});
//                     }
//                     else {
//                         q.push({nrow,ncol,INT_MAX});
//                     }
//                 }
//             }
//         }
//     }
// }
// int main() {
//     cin>>n>>m;
//     vector<vector<char>> grid;
//     for(int i=0; i<n; i++) {
//         vector<char> row;
//         for(int j=0; j<m; j++) {
//             char x='a';
//             cin>>x;
//             row.push_back(x);
//         }
//         grid.push_back(row);
//     }
//     vector<vector<bool>> vis(n,vector<bool>(m,false));
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             if(grid[i][j] == '.' and vis[i][j] == false) {
//                 bfs(i,j,grid,vis);
//             }
//         }
//     }
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cout<<grid[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }