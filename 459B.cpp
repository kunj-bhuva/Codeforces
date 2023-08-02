#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;

int main() {
    ll n;
    vii a;

    cin >> n;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    bool why=true;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] != a[0]) {
            why = false;
            break;
        }
    }
    if(why)
    {
        cout<<"0 "<<(n*(n-1))/2;
        return 0;
    }
    sort(a.begin(), a.end());

    ll diff = a[n - 1] - a[0];
    ll ways = 0;
    unordered_map<ll,ll> m;

    for (int i = 0; i < n; i++) {
        if (m.find(a[i]) != m.end()) {
            m[a[i]]++;
        } else {
            m[a[i]] = 1;
        }
    }

    for (auto i : m) {
        if (m.find(i.first - diff) != m.end()) {
            ll d= m[i.first - diff];
            ways += i.second * d;
        }
    }

    cout << diff << " " << ways << endl;

    return 0;
}
