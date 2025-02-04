#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve() {
    // Your code goes here
    ll n;
    cin>>n;
    ll arr[9]={0,1,2,3,5,6,7,8,9};
    vector<ll> vec;
    while(n!=0){
        vec.push_back(n%9);
        n=n/9;        
    }
    reverse(vec.begin(), vec.end());
    fi(i,0,vec.size()){
        cout<<arr[vec[i]];
    }
    cout<<endl;
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}