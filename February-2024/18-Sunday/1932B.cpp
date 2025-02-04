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
        int n;
        cin>>n;
        vi a;
        ip(a,n);
        long long m=a[0];
        for(int i=1;i<n;i++)
        {
            long long k=m/a[i];
            k++;
            m=k*a[i];
        }
        cout<<m<<endl;
        // Your code logic goes here
    }
    return 0;
}