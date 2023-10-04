#include <bits/stdc++.h>
using namespace std;
const int MAX = 200'007;
const int MOD = 1'000'000'007;
void solve() {
	int n = 0;
	long long x = 0;
	cin>>n>>x;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin>>a[i];
	}
	long long lo = 0, hi = 2'000'000'007;
	while (lo < hi) {
		long long mid = lo + (hi - lo + 1) / 2;
		long long tot = 0;
		for (int i = 0; i < n; i++) {
			tot += max(mid - a[i], 0LL);
		}
		if (tot <= x) {
            lo = mid;
        } 
		else {
            hi = mid - 1;
        }
	}
	cout<<lo<<endl;
}
int main() {
	int tc = 0;
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}