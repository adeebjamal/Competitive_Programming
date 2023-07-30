#include<bits/stdc++.h>
using namespace std;
int solve() {
    int noOfPeople=0, noOfSteps=0, k=0, vlad=0, answer=0;
    cin>>noOfPeople>>noOfSteps>>k>>vlad;
    for(int i=0; i<noOfPeople; i++) {
        int height=0;
        cin>>height;
        if(height != vlad and abs(height-vlad) % k == 0 and abs(height-vlad) <= (noOfSteps-1)*k) {
            answer++;
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