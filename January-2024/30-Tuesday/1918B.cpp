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
    vi a,b;
    ip(a);
    ip(b);
    vector<pair<int, int>> combined;
    for (int i = 0; i < a.size(); ++i) {
        combined.push_back({a[i], b[i]});
    }
    sort(combined.begin(), combined.end());
    for (auto& p : combined) {
        cout << p.first <<" " ;
    }
    cout<<endl;
    for (auto& p : combined) {
        cout << p.second <<" " ;
    }
    }
    return 0;
}