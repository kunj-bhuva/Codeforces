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
        string s;
        cin>>n;
        cin>>s;
        unordered_map<char,int>m;
        for(auto c:s)
        {
            if(m.find(c)==m.end())
            {
                m[c]=1;

            }
            else m[c]++;
        }
        int c=0;
        for(auto i:m)
        {
            int a=i.first-64;
            int b=i.second;
            if(b>=a)c++;
        }
        cout<<c<<endl;
    }
    return 0;
}