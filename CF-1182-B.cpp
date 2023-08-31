#include<bits/stdc++.h>
using namespace std;
int main() {
    int rows = 0, cols = 0;
    cin>>rows>>cols;
    vector<string> pic;
    for(int i=0; i<rows; i++) {
        string str = "";
        cin>>str;
        pic.push_back(str);
    }
    vector<vector<bool>> visited(rows,vector<bool>(cols,false));
    for(int i=1; i<rows-1; i++) {
        for(int j=1; j<cols-1; j++) {
            if(pic[i][j] == '*' and pic[i+1][j] == '*' and pic[i-1][j] == '*' and pic[i][j+1] == '*' and pic[i][j-1] == '*') {
                int upend = i, downend = i, leftend = j, rightend = j;
                while(upend >= 0 and pic[upend][j] == '*') visited[upend--][j] = true;
                while(downend < rows and pic[downend][j] == '*') visited[downend++][j] = true;
                while(leftend >= 0 and pic[i][leftend] == '*') visited[i][leftend--] = true;
                while(rightend < cols and pic[i][rightend] == '*') visited[i][rightend++] = true;
                for(int i2=0; i2<rows; i2++) {
                    for(int j2=0; j2<cols; j2++) {
                        if(visited[i2][j2] != (pic[i2][j2] == '*')) {
                            cout<<"NO";
                            return 0;
                        }
                    }
                }
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}