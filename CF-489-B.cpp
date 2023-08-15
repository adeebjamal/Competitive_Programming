#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0, m=0;
    cin>>n;
    vector<int> boys, girls;
    for(int i=0; i<n; i++) {
        int x=0;
        cin>>x;
        boys.push_back(x);
    }
    cin>>m;
    for(int i=0; i<m; i++) {
        int x=0;
        cin>>x;
        girls.push_back(x);
    }
    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());
    int answer=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(abs(boys[i]-girls[j]) <= 1) {
                answer++;
                girls[j] = 1e7;
                break;
            }
        }
    }
    cout<<answer;
    return 0;
}