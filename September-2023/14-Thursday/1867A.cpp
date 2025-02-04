#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
	ll n;
	cin >> n;
	vector<pair<ll, ll>> arr(n);
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		arr[i].first = x;
		arr[i].second = i;
	}
	vector<ll> ans(n);
	sort(arr.begin(), arr.end());
	reverse(arr.begin(),arr.end());
	for (ll i = 0; i < n; i++) {
		ans[arr[i].second] = i + 1;
	}
	for (auto i : ans) {
		cout << i << ' ';
	}
	cout << '\n';
}

int main() {
	ll t = 1;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}