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
    int n;
    cin>>n;
    vi s,f;
    ip(a);
    ip(b);
    vector<pair<int,int>> jobs;
    for(int i=0;i<n;i++)
    {jobs.push_back(make_pair(s[i],f[i]));}

    sort(jobs.begin(),jobs.end());
    
    int mach=0;

    for(auto& j:jobs)
    {

    }
    return 0;
}