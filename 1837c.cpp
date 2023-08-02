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
        string s;
        cin>>s;
        char c='$';
        int found=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=c && s[i]=='?')
            {
                s[i]=c;
            }
            if(s[i]!='?')
            {
                found++;
                c=s[i];
            }
        }
         c = '$';
        for(ll i = (ll)s.size()-1 ; i >= 0; i--) {
            if(c!='$' and s[i] == '?') {
                s[i] = c;
            }
            if(s[i]!='?') {
                found++;
                c = s[i];
            }
        }
        if(found != 0) {
            cout<<s;
        }
        else {
            for(ll i = 0 ; i < (ll)s.size(); i++)
                cout<<0;
        }
        cout<<endl;
    }
    return 0;
}