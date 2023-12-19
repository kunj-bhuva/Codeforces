#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
int main()
{
 
     #define cp(t)  \
     int t;    \
     cin >> t; \
     while (t--)
     cp(t)
     {
          int n;
          cin >> n;
          int ar[n];
          int p = 0, m = 0;
          int sum = 0;
          int mn = 1e9;
          forl
          {
               cin >> ar[i];
               p += (ar[i] > 0);
               m += (ar[i] <= 0);
               ar[i] = abs(ar[i]);
               sum +=ar[i];
               mn = min(mn, ar[i]);
          }
          if(m%2)
          {
               sum -=(2*mn);
          }
          cout<<sum<<endl;
          
 
 
 
     }
 
     return 0;
}