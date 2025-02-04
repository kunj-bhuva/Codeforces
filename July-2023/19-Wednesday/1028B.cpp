#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
int sum(int n)
{
    int d=0;
    int sum=0;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        sum+=d;
    }
    return sum;
}
int main()
{
    int n,m;
    cin>>n>>m;
     int len = 400;
  cout << string(len, '5') << "\n";
  cout << (string(len - 1, '4') + '5') << "\n";
    return 0;
}