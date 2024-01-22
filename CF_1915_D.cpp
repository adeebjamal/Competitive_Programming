#include<bits/stdc++.h>
using namespace std;
string solve() {
    int n = 0;
    cin >> n;
    string input = "", answer = "";
    cin >> input;
    while(!input.empty()) {
        int x = input.back() == 'a' or input.back() == 'e' ? 2 : 3;
        while(x--) {
            answer += input.back();
            input.pop_back();
        }
        answer.push_back('.');
    }
    answer.pop_back();
    reverse(answer.begin(), answer.end());
    return answer;
}
int main() {
    int tc = 0;
    cin >> tc;
    while(tc--) {
        cout << solve() << endl;
    }
    return 0;
}