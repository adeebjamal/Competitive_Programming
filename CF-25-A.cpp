#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int odds=0, evens=0, odd=0, even=0;
    for(int i=1; i<=n; i++) {
        int num=0;
        cin>>num;
        if(num%2==0) {
            evens++;
            even=i;
        }
        else {
            odds++;
            odd=i;
        }
    }
    if(evens==1) {
        cout<<even;
    }
    else if(odds==1) {
        cout<<odd;
    }
    return 0;
}