#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n=0, k=0, answer=0;
    cin>>n>>k;
    string str="";
    cin>>str;
    for(int i=0; i<n; ) {
        if(str[i] == 'B') {
            i+= k;
            answer++;
        }
        else {
            i++;
        }
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