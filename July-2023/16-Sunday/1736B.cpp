#include <iostream>
#include <vector>
#include <algorithm> // Added for sort function
#include <climits>   // Added for INT_MAX
#define ll long long

using namespace std;

void reduce(vector<pair<ll,ll>>& a, ll k, ll n) {
    for(ll i = 0; i < n; i++) {
        if(a[i].first!=INT_MAX)a[i].first -= k;
        if(a[i].first <= 0) {
            a[i].first = INT_MAX;
            a[i].second = INT_MAX;
        }
    }
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> h(n);
        vector<ll> p(n);
        for(auto& i : h) {
            cin >> i;
        }
        for(auto& i : p) {
            cin >> i;
        }
        vector<pair<ll, ll>> pairs;
        for (ll i = 0; i < n; ++i) {
            pairs.push_back(make_pair(h[i], p[i]));
        }
        sort(pairs.begin(), pairs.end()); // Sort pairs based on the first element

        bool success = true;
        while(k>0) {
            reduce(pairs, k, n);
            sort(pairs.begin(), pairs.end());
            if(pairs[0].first ==INT_MAX) {
                cout << "YES\n";
                success = false;
                break;
            }
            if(pairs[0].first > k) {
                cout << "NO\n";
                success = false;
                break;
            }
            else 
            {
                k -= pairs[0].second;
                
            }
        }
        if (success)
            cout << "YES\n";
    }
    return 0;
}
