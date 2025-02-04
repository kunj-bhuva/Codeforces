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
        int a,b;
        cin>>a>>b;
        if((a==1&&b==1)||(a==2&&b==1)||(a==1&&b==2))cout<<"No"<<endl;
        else if((a%2==1&&b%2==0)&&a<b)cout<<"No"<<endl;
        else if((b%2==1&&a%2==0)&&a>b)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

        // Your code logic goes here
    }
    return 0;
}
