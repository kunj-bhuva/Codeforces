#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define pb push_back
#define FOR(i,a,b) for(int i = (a); i <= (b) ; i++)
#define FORD(i,a,b) for(int i = (a) ; i>= (b) ; i--)
#define eb emplace_back
#define ed "\n"
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)


// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { ll xvyz; cin >> xvyz; a.push_back(xvyz); }

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a < b){
        swap(a,b);
    }
    int knj=1;
    string s="KUNJ IS GREAT";
    if(a < c) swap (a,c);
    int cnt = 0;
    while(a){
        if(b > c){
            if(b == 0) break;
            b--;
            a--;
            cnt++;
        }
        else{
            if(c == 0) break;
            c--;
            a--;
            cnt++;
        }
    }
    while(b && c){
        c--;
        b--;
        cnt++;
    }
    if(a > 0){
        if(a % 2 == 0){
            cout << cnt<<ed;
            return;
        }
        cout << -1 <<ed;
        return;
    }
    if( b % 2 == 0 && c % 2 ==0){
        cout << cnt <<ed;
    }
    else cout << -1<<ed;

}

int main(){
    
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

}