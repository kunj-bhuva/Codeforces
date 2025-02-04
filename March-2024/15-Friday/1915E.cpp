#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;



int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi ans;
        unordered_set<ll> m;
        m.insert(0);
        ll sum = 0;
        bool f = false;
        for(int i = 0; i < n; i++) {
            int d;
            cin >> d;
            d=(i % 2 == 1 ? -1 * d : d);
            if (f == false) {
                sum += d;
                if (m.count(sum)) {
                    cout<<"YES"<<endl;
                    f = true;
                } else {
                    m.insert(sum);
                }
            }
        }
        if(f==false) { 
            cout << "NO" << endl;
        }
    }
    return 0;
}
