#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ull =unsigned long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
int main()
{
    ull a,b,x,y;
    cin>>a>>b>>x>>y;
    ull k=__gcd(x,y);
    ull a1=b/k;
    ull a2=a/k;
    cout<<min(a1,a2);
    return 0;
}