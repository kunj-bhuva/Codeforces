#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve()
{
    int n;
    cin>>n;
    vector<int> a,b,c;
    long long tot=0;
    for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); tot+=xvyz;}
    for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; b.push_back(xvyz);  }
    for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; c.push_back(xvyz); }

    // cout<<a[0]<<endl;

    long long one=tot/3;
    if(tot%3>0)
        one++;
    long long sum1=0,sum2=0,sum3=0;
    int as=0,ae=0,bs=0,be=0,cs=0,ce=0;
    int f1=0,f2=0,f3=0;
    
    for(int i=0;i<n;i++)
    {
        sum1+=a[i];
        sum2+=b[i];
        sum3+=c[i];

        if(sum1>=one&&f1==0)
        {
            as=i;
            f1=1;
            
        }
        if(sum2>=one&&f2==0)
        {
            bs=i;
            f2=1;
            
        }
        if(sum3>=one&&f3==0)
        {
            cs=i;
            f3=1;
            
        }
        
    }
    sum1=0,sum2=0,sum3=0;
    f1=0,f2=0,f3=0;
    for(int i=n-1;i>=0;i--)
    {
        sum1+=a[i];
        sum2+=b[i];
        sum3+=c[i];

        if(sum1>=one&&f1==0)
        {
            ae=i;
            f1=1;
            
        }
        if(sum2>=one&&f2==0)
        {
            be=i;
            f2=1;
            
        }
        if(sum3>=one&&f3==0)
        {
            ce=i;
            f3=1;
            
        }
    }

    int flag=0;
    sum1=0,sum2=0,sum3=0;
    for(int i=as+1;i<be;i++)
    {
        sum1+=c[i];
        if(sum1>=one)
        {
            cout<<"1"<<" "<<as+1<<" "<<be+1<<" "<<n<<" "<<as+2<<" "<<be<<endl;
                return;
        }
    }
    sum1=0;
    for(int i=as+1;i<ce;i++)
    {
        sum1+=b[i];
        if(sum1>=one)
        {
            cout<<"1"<<" "<<as+1<<" "<<as+2<<" "<<ce<<" "<<ce+1<<" "<<n<<endl;
                return;
        }
    }
    sum1=0;
    for(int i=bs+1;i<ae;i++)
    {
        sum1+=c[i];
        if(sum1>=one)
        {
            cout<<ae+1<<" "<<n<<" "<<"1"<<" "<<bs+1<<" "<<bs+2<<" "<<ae<<endl;
                return;
        }
    }
    sum1=0;
    for(int i=bs+1;i<ce;i++)
    {
        sum1+=a[i];
        if(sum1>=one)
        {
            cout<<bs+2<<" "<<ce<<" "<<"1"<<" "<<bs+1<<" "<<ce+1<<" "<<n<<endl;
                return;
        }
    }
    sum1=0;
    for(int i=cs+1;i<ae;i++)
    {
        sum1+=b[i];
        if(sum1>=one)
        {
            cout<<ae+1<<" "<<n<<" "<<cs+2<<" "<<ae<<" "<<"1"<<" "<<cs+1<<endl;
            return;
        }
    }
    sum1=0;
    for(int i=cs+1;i<be;i++)
    {
        sum1+=a[i];
        if(sum1>=one)
        {
            cout<<cs+2<<" "<<be<<" "<<be+1<<" "<<n<<" "<<"1"<<" "<<cs+1<<endl;
                return;
        }
    }
    cout<<"-1"<<endl;
    return;
}
// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}