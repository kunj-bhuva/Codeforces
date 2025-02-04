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
        vii f,b;
        int n,m;
        cin>>n>>m;
        vi a;
        ip(a,n);
        string s;
        cin>>s;
        long long p=1;

        for(int i=0;i<n;i++)
        {
            p*=a[i];
            f.push_back(p);
        }
        p=1;
        for(int i=n-1;i>=0;i--)
        {
            p*=a[i];
            b.push_back(p);
        }
        int idxf=0,idxb=n-1;
        long long forw=1,back=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                
                forw*=a[idxf];
            }
        }

        // Your code logic goes here
    }
    return 0;
}