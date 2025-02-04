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
    ll t;cin>>t;
    while(t--){
        string n;
        cin>>n;
        ll l=n.length();
        n='0'+n;
        reverse(n.begin(),n.end());
        ll k=0;
        for(ll i=0;i<l;i++)
        {
            if(n[i]>='5')
            {
                n[i+1]++;
                for(ll j=i;j>=k;j--)
                {
                    n[j]='0';
                }
                k=i;
            }
        }
        reverse(n.begin(),n.end());
        if(n[0]=='0')
        {
            for(ll i=1;i<=l;i++)
            {
                cout<<n[i];
            }
            cout<<endl;
        }
        else{
            for(ll i=0;i<=l;i++)
            {
                cout<<n[i];
            }
            cout<<endl;
        }
    }
    return 0;
}