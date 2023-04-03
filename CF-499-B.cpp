#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0, m=0;
    cin>>n>>m;
    vector<pair<string,string>> vec;       // {first_lang, second_lang}
    unordered_map<string,int> mp;
    for(int i=0; i<m; i++) {
        string a="", b="";
        cin>>a>>b;
        vec.push_back({a,b});
        mp[a]=i;
        mp[b]=i;
    }
    for(int i=0; i<n; i++) {
        string s="";
        cin>>s;
        if(vec[mp[s]].first.length() < vec[mp[s]].second.length() or vec[mp[s]].first.length() == vec[mp[s]].second.length()) {
            cout<<vec[mp[s]].first + " ";
        }
        else {
            cout<<vec[mp[s]].second + " ";
        }
    }
    return 0;
}