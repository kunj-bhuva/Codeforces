#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << endl;
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
int main()
{
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi a;
        int big=n-k+1;
        int small=n-k;
        while(k--)
        {
            if(small>0)
            a.push_back(small);
            
            a.push_back(big);
            small--;
            big++;

        }
        while(small>0)
        {
            a.push_back(small);
            small--;
        }
        printv(a);
    }
    return 0;
}