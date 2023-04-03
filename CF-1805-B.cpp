#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        string str="";
        cin>>len>>str;
        char letter = *min_element(str.begin(),str.end());
        for(int i=len-1; i>=0; i--) {
            if(str[i]==letter) {
                str.erase(i,1);
                break;
            }
        }
        cout<<letter + str<<endl;
    }
}