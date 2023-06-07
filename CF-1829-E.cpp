#include<bits/stdc++.h>
using namespace std;
int dr[]={-1,0,1,0};
int dc[]={0,-1,0,1};
int row=0, col=0;
void dfs(int& row1, int& col1, vector<vector<int>>& grid, vector<vector<bool>>& vis, int& curr_depth) {
    curr_depth+= grid[row1][col1];
    vis[row1][col1]=true;
    for(int i=0; i<4; i++) {
        int nrow=row1+dr[i], ncol=col1+dc[i];
        if(nrow>=0 and ncol>=0 and nrow<row and ncol<col) {
            if(grid[nrow][ncol] != 0 and vis[nrow][ncol] == false) {
                dfs(nrow,ncol,grid,vis,curr_depth);
            }
        }
    }
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cin>>row>>col;
        vector<vector<int>> grid(row,vector<int>(col,0));
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                cin>>grid[i][j];
            }
        }
        vector<vector<bool>> vis(row,vector<bool>(col,false));
        int answer=0;
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(grid[i][j] != 0 and vis[i][j] == false) {
                    int curr_depth=0;
                    dfs(i,j,grid,vis,curr_depth);
                    answer=max(answer,curr_depth);
                }
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}