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
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll mf=0;
        map<char,ll>freq;
        for(ll i=0;i<n;i++)
        {
            freq[s[i]]++;
            mf=max(mf,freq[s[i]]);
        }
        if(mf>(n/2))
            cout<<(n-(n-mf)*2)<<endl;
        else{
            cout<<n%2<<endl;
        }
    }
    return 0;
}