#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

bool isSet(long long num, int bit) {
  
  long long mask = 1LL << bit;

  return (num & mask) != 0;
}
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve() {
    ll n;
    cin >> n;
    vector<int>bits(64,0);
    for(int i=0;i<64;i++)
    {
        bits[i]=isSet(n,i);
    }
    printv(bits);
    string binaryStr = bitset<64>(n).to_string();
    cout<<binaryStr[63]<<endl;
    size_t pos = binaryStr.find('1');
    if (pos != string::npos) {
        binaryStr = binaryStr.substr(pos);
    }
 
    vector<ll> results;
    results.push_back(n);
    
    for (size_t i = 0; i < binaryStr.size(); ++i) {
        if (binaryStr[i] == '1') {
            string modified = binaryStr;
            modified[i] = '0';
            ll modifiedNum = bitset<64>(modified).to_ullong();
            if (modifiedNum != 0) {
                results.push_back(modifiedNum);
            }
        }
    }
 
    sort(results.begin(), results.end());
 
    cout << results.size() << endl;
    for (const auto &num : results) {
        cout << num << " ";
    }
    cout << endl;
 
    return;
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}