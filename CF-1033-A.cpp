#include<bits/stdc++.h>
using namespace std;
int n=0;
int qx=0, qy=0;
int kx=0, ky=0;
int cx=0, cy=0;
string dfs(int& row, int& col, vector<vector<bool>>& vis) {
    if(row == cx and col == cy) {
        return "YES";
    }
    vis[row][col]=true;
    for(int dr=-1; dr<=1; dr++) {
        for(int dc=-1; dc<=1; dc++) {
            int nrow=row+dr, ncol=col+dc;
            if(nrow>=0 and ncol>=0 and nrow<=n and ncol<=n and nrow != qx and ncol != qy) {
                if(vis[nrow][ncol] == false) {
                    if(dfs(nrow,ncol,vis) == "YES") {
                        return "YES";
                    }
                }
            }
        }
    }
    return "NO";
}
int main() {
    cin>>n;
    cin>>qx>>qy;
    cin>>kx>>ky;
    cin>>cx>>cy;
    vector<vector<bool>> vis(n+1,vector<bool>(n+1,false));
    for(int i=qx; ; i++) {
        bool flag=false;
        for(int j=qy; ; j++) {
            if(i>=0 and j>=0 and i<=n and j<=n) {
                vis[i][j]=true;
            }
            else {
                flag=true;
                break;
            }
        }
        if(flag == true) {
            break;
        }
    }
    for(int i=qx; ; i--) {
        bool flag=false;
        for(int j=qy; ; j--) {
            if(i>=0 and j>=0 and i<=n and j<=n) {
                vis[i][j]=true;
            }
            else {
                flag=true;
                break;
            }
        }
        if(flag == true) {
            break;
        }
    }
    for(int i=qx; ; i++) {
        bool flag=false;
        for(int j=qy; ; j--) {
            if(i>=0 and j>=0 and i<=n and j<=n) {
                vis[i][j]=true;
            }
            else {
                flag=true;
                break;
            }
        }
        if(flag == true) {
            break;
        }
    }
    for(int i=qx; ; i--) {
        bool flag=false;
        for(int j=qy; ; j++) {
            if(i>=0 and j>=0 and i<=n and j<=n) {
                vis[i][j]=true;
            }
            else {
                flag=true;
                break;
            }
        }
        if(flag == true) {
            break;
        }
    }
    cout<<dfs(kx,ky,vis);
    return 0;
}