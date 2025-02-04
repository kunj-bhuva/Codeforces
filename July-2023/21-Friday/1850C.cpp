#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << \n
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define ip(a)           for(int i=0;i<n;i++){int xvyz; cin>>xvyz; a.push_back(xvyz); }
int main()
{
    int t;cin>>t;
    while(t--){
    vector<char> a;
    for(int i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            char ch;
            cin>>ch;
            if(ch!=46)a.push_back(ch);
        }
    }
    printv(v);
    }
    return 0;
}