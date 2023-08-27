#include<bits/stdc++.h>
using namespace std;
string solve() {
    int r=0, c=0;
    cin>>r>>c;
    vector<string> grid;
    for(int i=0; i<r; i++) {
        string temp="";
        cin>>temp;
        grid.push_back(temp);
    }
    string base="vika";
    int index=0;
    for(int j=0; j<c; j++) {
        for(string& row: grid) {
            if(row[j] == base[index]) {
                index++;
                break;
            }
        }
    }
    if(index == 4) {
        return "YES";
    }
    return "NO";
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}