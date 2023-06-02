#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        string base="codeforces", str="";
        cin>>str;
        int answer=0;
        for(int i=0; i<10; i++) {
            answer+= (base[i] != str[i]);
        }
        cout<<answer<<endl;
    }
    return 0;
}