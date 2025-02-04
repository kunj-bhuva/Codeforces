#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vi a;
        ip(a,n);
        bool inc=false,start=false;
        if(a[0]>a[1])start=true;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]>a[i])inc=true;
        }
        if(n==1)cout<<"YES"<<endl;
        else if(n==2&&start==true) cout<<"NO"<<endl;
        else if(inc==true&&start==true)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
        

        // Your code logic goes here
    }
    return 0;
}