#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << endl;
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << endl;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
#define loop(n)   for(int i=0;i<n;i++)

void solve(int freq,vi& b,int no)
{
    int k=freq;
    for(int i=1;i<=k;i++)
    {
        int z= no + (i%freq);
        b.push_back(z);
    }
}

int main()