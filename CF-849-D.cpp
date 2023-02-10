#include<bits/stdc++.h>
using namespace std;
int maximum(int a, int b) {
    if(a>b) {
        return a;
    }
    return b;
}
int solve() {
    int len=0;
    string str="";
    cin>>len>>str;
    unordered_map<char,int> left, right;
    for(char& letter: str) {
        right[letter]++;
    }
    int answer=right.size();
    for(char& letter: str) {
        left[letter]++;
        right[letter]--;
        if(right[letter] == 0) {
            right.erase(right.find(letter));
        }
        answer = maximum(answer,left.size()+right.size());
    }
    return answer;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}