#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

int main() {
    int t; cin >> t;
    while(t--) {
        int n,k;
        cin>>n>>k;
       if(k>=(2*n-1)*2)
         cout<<((k+1)/2+1)<<endl;
         else  cout<<((k+1)/2)<<endl;

    }
    return 0;
}