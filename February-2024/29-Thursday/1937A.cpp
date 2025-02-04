#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[200005];

void solve(){
    cin>>n;
    int ans=1;
    while(n/2>0){
        ans*=2;
        n/=2;
    }
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

}