#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define k_square ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fi(l, r) for(ll i=l; i<r; i++)
#define fj(l, r) for(ll j=l; j<r; j++)
#define fk(l, r) for(ll k=l; k<r; k++)
#define fir(r, l) for(ll i=r;i>=l;i--)
#define fjr(r, l) for(ll j=r;j>=l;j--)
#define fkr(r, l) for(ll k=r,k>=l;k--)
#define mod 1000000007
#define pb push_back
#define eb emplace_back
#define em emplace
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define c1(x) cout << x << endl;
#define PI 3.141592653589793238462
#define ppb pop_back
#define in(n) ll n;cin>>n;
#define inarr(arr,n) ll arr[n];for(ll i=0;i<n;i++)cin>>arr[i];
#define p0 cout<<0<<endl;
#define instr(n) string n;cin>>n;

void solve()
{
    in(n);
    inarr(a, n);
    ll pos = -1;

    fi(0,n)
    {
        if(a[i]>0)
        {
            pos = i;
            break;
        }
    }
    if(pos==-1)
    {
        cout << n - 1 << endl;
        fir(n-1,1)
        {
            cout << i << " " << i + 1 << endl;
        }
        return;
    }
    
    cout << 2 * (n - 1) + 5 << endl;
    fi(0,5)
    {
        cout << pos + 1 << " " << pos + 1 << endl;
    }
    ll x = pos;
    fi(1,n)
    {
        cout << i + 1 << " " << x + 1 << endl;
        cout << i + 1 << " " << x + 1 << endl;
        x = i;
    }
}

int main()
{
    k_square;
    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}