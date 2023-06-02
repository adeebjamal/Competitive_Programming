#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int n=0;
        cin>>n;
        unordered_map<string,int> mp;
        mp["11"]=mp["01"]=mp["10"]=mp["00"]=1e9;
        for(int i=0; i<n; i++) {
            int time=0;
            string str="";
            cin>>time>>str;
            mp[str]=min(mp[str],time);
        }
        int answer=min(mp["11"],mp["01"]+mp["10"]);
        if(answer>(int)1e6) {
            cout<<-1<<endl;
        }
        else {
            cout<<answer<<endl;
        }
    }
    return 0;
}