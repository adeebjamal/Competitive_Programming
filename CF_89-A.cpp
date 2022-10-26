#include<bits/stdc++.h>
using namespace std;
bool vowel(char ch) {
    bool b1= (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y');
    bool b2= (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='Y');
    return b1 or b2;
}
int main() {
    string str="";
    cin>>str;
    for(char& letter: str) {
        if(!vowel(letter)) {
            cout<<'.';
            if(letter>='a' and letter<='z') cout<<letter;
            else if(letter>='A' and letter<='Z') cout<<char(letter-'A'+'a');
        } 
    }
    return 0;
}