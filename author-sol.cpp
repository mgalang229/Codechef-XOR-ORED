#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int a[100], n;

void solve() {
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int x=a[0];
	for(int i=1; i<n; ++i)
		x&=a[i];
	int ans=0;
	for(int i=0; i<n; ++i)
		ans|=(a[i]^x);
	cout << x << " " << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--)
		solve();
}
