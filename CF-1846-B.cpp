#include<bits/stdc++.h>
using namespace std;
string solve() {
    vector<string> grid;
    for(int i=0; i<3; i++) {
        string str="";
        cin>>str;
        grid.push_back(str);
    }
    unordered_set<char> mp;
    for(string& row: grid) {
        for(char& ch: row) {
            mp.insert(ch);
        }
        if(mp.size() == 1 and *mp.begin() != '.') {
            string answer="";
            answer.push_back(*mp.begin());
            return answer;
        }
        mp.clear();
    }
    for(int i=0; i<3; i++) {
        for(string& row: grid) {
            mp.insert(row[i]);
        }
        if(mp.size() == 1 and *mp.begin() != '.') {
            string answer="";
            answer.push_back(*mp.begin());
            return answer;
        }
        mp.clear();
    }
    mp.insert(grid[0][0]);
    mp.insert(grid[1][1]);
    mp.insert(grid[2][2]);
    if(mp.size() == 1 and *mp.begin() != '.') {
        string answer="";
        answer.push_back(*mp.begin());
        return answer;
    }
    mp.clear();
    mp.insert(grid[0][2]);
    mp.insert(grid[1][1]);
    mp.insert(grid[2][0]);
    if(mp.size() == 1 and *mp.begin() != '.') {
        string answer="";
        answer.push_back(*mp.begin());
        return answer;
    }
    return "DRAW";
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}