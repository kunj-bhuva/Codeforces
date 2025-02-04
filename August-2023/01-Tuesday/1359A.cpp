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
    int t;cin>>t;
    while(t--)
    {
        long n,m,k;
        cin>>n>>m>>k;
        long c=n/k;
        if(c>=m)
        {
            cout<<m<<endl;
        }
        else
        {
            long rem=m-c;
            long other=ceil(1.0*rem/(k-1));
            cout<<c-other<<endl;
        }
        

    }
    return 0;
}