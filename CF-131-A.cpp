#include<bits/stdc++.h>
using namespace std;
bool f1(string& str) {
    for(char& letter: str) {
        if(letter >= 'a' and letter <= 'z') {
            return false;
        }
    }
    return true;
}
bool f2(string& str) {
    bool res = true;
    for(int i=1; i<str.length(); i++) {
        if(str[i] >= 'a' and str[i] <= 'z') {
            res = false;
            break;
        }
    }
    return res and (str[0] >= 'a' and str[0] <= 'z');
}
void invert(string& str) {
    for(char& letter: str) {
        if(letter >= 'a' and letter <= 'z') {
            cout<<(char)(letter - 'a' + 'A');
        }
        else {
            cout<<(char)(letter - 'A' + 'a');
        }
    }
}
int main() {
    string str="";
    cin>>str;
    if(f1(str)) {
        invert(str);
    }
    else if(f2(str)) {
        invert(str);
    }
    else {
        cout<<str;
    }
    return 0;
}