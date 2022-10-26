#include<bits/stdc++.h>
using namespace std;
char solve() {
    string a="", b="";
    cin>>a>>b;
    unordered_map<char,int> mp={{'L',3},{'M',2},{'S',1}};
    if(a==b) return '=';
    else if(mp[a.back()] > mp[b.back()]) return '>';
    else if(mp[a.back()] < mp[b.back()]) return '<';
    else if(mp[a.back()] == mp[b.back()] and a.length() == 1 and b.length() == 1) return '=';
    if(a.back()=='L' and b.back()=='L') {
        int A=count(a.begin(),a.end(),'X'), B=count(b.begin(),b.end(),'X');
        if(A>B) return '>';
        else if(A<B) return '<';
    }
    int A=count(a.begin(),a.end(),'X'), B=count(b.begin(),b.end(),'X');
    if(A>B) return '<';
    return '>';
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}