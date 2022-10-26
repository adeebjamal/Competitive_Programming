#include<bits/stdc++.h>
using namespace std;
int main() {
    string input="", given="hello";
    cin>>input;
    int j=0;
    for(int i=0; i<input.length(); i++) {
        if(input[i] == given[j]) {
            j++;
        }
    }
    if(j == 5) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}