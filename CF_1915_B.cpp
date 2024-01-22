#include<bits/stdc++.h>
using namespace std;
char solve() {
    char answer = ' ';
    for(int i = 0; i < 3; i++) {
        string str = "";
        cin>>str;
        unordered_map<char,int> hash;
        for(char& letter: str) {
            hash[letter]++;
        }
        if(hash['A'] == 0) {
            answer = 'A';
        }
        else if(hash['B'] == 0) {
            answer = 'B';
        }
        else if(hash['C'] == 0) {
            answer = 'C';
        }
    }
    return answer;
}
int main() {
    int tc = 0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}