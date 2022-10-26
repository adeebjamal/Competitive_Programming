#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        string str="";
        cin>>str;
        unordered_map<char,int> mp;
        while(!str.empty()) {
            if(mp[str[0]]==1) {
                str.erase(0,1);
                continue;
            }
            else if(str[0] != str[1]) {
                mp[str[0]]=1;
                str.erase(0,1);
            }
            else if(str[0]==str[1]) {
                str.erase(0,2);
            }
        }
        str="";
        for(auto& itr: mp) {
            if(itr.second==1) {
                str.push_back(itr.first);
            }
        }
        sort(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}