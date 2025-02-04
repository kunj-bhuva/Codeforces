#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main()
{   
    ios;
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("out3.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--) {
            ll a1,a2,a3,a4,duration=0;
            cin>>a1>>a2>>a3>>a4;
            if(a1 == 0) {
                cout<<1;
            }
            else {
                cout<<a1+2*min(a2,a3)+min(a1+1,abs(a2-a3)+a4);
            }
            cout<<endl;
        }
 
    return 0;     
 }