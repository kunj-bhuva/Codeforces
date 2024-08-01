#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vii = vector<ll>;
#define printv(v)         for(auto i: v) cout << i << ' '; cout << endl
#define ip(a,n)           for(int i=0;i<n;i++){long long xvyz; cin>>xvyz; a.push_back(xvyz); }

int FOR(int n){
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vii a;
        ip(a, n);
        int c= 0;

        for(int i = x; i <= y; i++) 
        {
            long long ans=0;

            for(int j=0;j<i;j++)
            {
                ans^=a[j];
            }
            if(ans==FOR(i))c++;
            int left=0,right=i;
            for(right=i;right<n;right++)
            {
                ans^=a[left];
                ans^=a[right];
                long long calc=FOR(right+1)^FOR(left+1);
                left++;
                if(calc==ans)c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}