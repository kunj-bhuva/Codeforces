#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }
int digit(int n)
{
    int c=0;
    while(n>0)
    {
        n/=10;
        c++;
    }
    return c;
}
int z(int n)
{
    int c=0;
    while(n>0)
    {
        int temp=n%10;
        if(temp==0)
            c++;
        else
            break;
        n/=10;
    }
    return c;
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        vi a;
        ip(a,n);
        vector<pair<int,int>>no;
        int total=0;
        int flag=0;
        for(auto i:a)
        {
            int j=digit(i);
            total+=j;
            int l=(z(i));
            if(l==0)flag=1;
            no.push_back(make_pair(l,j));
        }
        sort(no.begin(),no.end(),greater<>());
       
        
            for(int i=0;i<no.size();i+=2)
            {
                total-=no[i].first;
            }
        if(total>m)cout<<"Sasha"<<endl;
        else cout<<"Anna"<<endl;
        // Your code logic goes here
    }
    return 0;
}