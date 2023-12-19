#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
bool solve(){
    int n;
    cin >> n;
    vector<int>c(n-1);
    for(int i = 0; i < n-1; i++) cin >> c[i];
    unordered_map<int,int> m;
    m[c[0]]++;
    int big;
    int num=0;
    for(int i=0;i<n-2;i++)
    {
        m[c[i+1]-c[i]]++;
        if((c[i+1]-c[i])>n)
        {
            big++;
            num=c[i+1]-c[i];
        }
            
    }
    int adder=0;
    if(big>1)return false;
    if(big==1)
    {
        for(int i=1;i<n;i++)
        {
            auto it=m.find(i);
            if(it==m.end()||it->second==0)
            {
                adder+=i;
            }

        }
    }
    if(adder==big)return true;
    return false;
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout << (solve() ? "YES" : "NO") << "\n";
    }

}