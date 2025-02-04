#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back({x})
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

// Main function and template
int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<pair<int,int>>a;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='B'&&s2[i]=='B')
            {
                a.push_back({2,3});
            }
            else if(s1[i]=='B')
            {
                a.push_back({1,1});
            }
            else 
            {
                a.push_back({1,2});
            }
        }
        int prev=0,lane=0;
        int ans=1,f=0;
        for(int i=0;i<n;i++)
        {
            
            if(prev==0&&a[i].first==2)continue;
            else if(f==0){
                prev=1;
                lane=a[i].second;
                f=1;
                continue;
            }
            if(prev==1 && a[i].first==1 && lane!=a[i].second )
            {
                cout<<"NO"<<endl;
                ans=0;
                break;
            }
            // if(prev==1 && a[i].first==1 && lane!=)
            if(prev==1 && (a[i].second==lane) && a[i].first==1)
            {
                continue;
            }
            
            if(prev==1 && a[i].first==2  )
            {
                if(lane==1)lane=2;
                else lane=1;
                
                
            }
            
            
        }
        if(ans==1)Ha;
    }
    return 0;
}