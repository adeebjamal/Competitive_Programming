// https://codeforces.com/contest/2044/problem/C
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc = 0;
    cin >> tc;
    while(tc--) {
        int cols = 0, first = 0, second = 0, no = 0, answer = 0;
        cin >> cols >> first >> second >> no;
        int leftFirst = cols, leftSecond = cols;
        if(first <= cols) {
            answer += first;
            leftFirst -= first;
        }
        else {
            answer += cols;
            leftFirst = 0;
        }
        if(second <= cols) {
            answer += second;
            leftSecond -= second;
        }
        else {
            answer += cols;
            leftSecond = 0;
        }
        answer += min(no, leftFirst + leftSecond);
        cout << answer << endl;
    }
    return 0;
}