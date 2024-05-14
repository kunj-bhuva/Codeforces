#include<bits/stdc++.h>
#include<vector>
// #include <vector>
#include <algorithm>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout <<endl;
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vi a;
        ip(a);
        vector<int>f,b;
        f.push_back(1);
        for(int i=1;i<n-1;i++)
        {
            if((a[i+1]-a[i])<(a[i]-a[i-1]))
                f.push_back(1);
            else
                f.push_back(a[i+1]-a[i]);
        }
        reverse(a.begin(), a.end());
        b.push_back(1);
        for(int i=1;i<n-1;i++)
        {
            if((-a[i+1]+a[i])<(-a[i]+a[i-1]))
                b.push_back(1);
            else
                b.push_back(-a[i+1]+a[i]);
        }
        reverse(b.begin(), b.end());
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int s,e;
            cin>>s>>e;
            if(s<e)
            {
                s--;
                e-=2;
                int ans=0;
                for(int k=s;k<=e;k++)
                {
                    ans+=f[k];
                }
                cout<<ans<<endl;
            }
            else
            {
                s-=2;
                e--;
                int ans=0;
                for(int k=s;k>=e;k--)
                    ans+=b[k];
                cout<<ans<<endl;
            }
        }

    }
    return 0;
}