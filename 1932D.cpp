#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vll;
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl
#define Ha cout << "YES" << endl
#define na cout << "No" << endl
#define ha cout << "Yes" << endl


bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool isSubstring(const string &mainString, const string &subString) {
    return mainString.find(subString) != string::npos;
}

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        char s ;
        cin >> s;
        vll c , d , ss , h;
        for(ll i = 0 ; i<2*n ; i++){
            string tmp;
            cin >> tmp;
            if(tmp[1] == 'C'){
                c.pb(tmp[0]-'0');
            }else if(tmp[1] == 'D'){
                d.pb(tmp[0]-'0');
            }else if(tmp[1] == 'S'){
                ss.pb(tmp[0]-'0');
            }else{
                h.pb(tmp[0]-'0');
            }
        }
        sort(c);
        sort(d);
        sort(ss);
        sort(h);
        if(s == 'C'){
            if(c.size() < d.size()%2 + ss.size()%2 + h.size()%2){
                cout << "IMPOSSIBLE" << endl;
            }else{
                for(ll i = 0 ; i < d.size() && i+1 < d.size() ; i += 2){
                    cout << d[i] << 'D' << " " << d[i+1] << "D" <<endl;
                }
                for(ll i = 0 ; i < h.size() && i+1<h.size() ; i += 2){
                    cout << h[i] << 'H' << " " << h[i+1] << "H" << endl;
                }
                for(ll i = 0 ; i < ss.size()&& i+1<ss.size() ; i += 2){
                    cout << ss[i] << 'S' << " " << ss[i+1] << "S" << endl;
                }
                ll k=0;
                if(d.size()%2 == 1){
                    cout << d[d.size()-1] << 'D' << " " << c[k] << "C" << endl;
                    k++;
                }
                if(ss.size()%2 == 1){
                    cout << ss[ss.size()-1] << 'S' << " " << c[k] << "C" << endl;
                    k++;
                }
                if(h.size()%2 == 1){
                    cout << h[h.size()-1] << 'H' << " " << c[k] << "C" << endl;
                    k++;
                }
                for(ll i = k ; i < c.size() && i+1<c.size(); i += 2){
                    cout << c[i] << 'C' << " " << c[i+1] << "C" <<endl;
                }
            }
        }
        if(s == 'D'){
            if(d.size() < c.size()%2 + ss.size()%2 + h.size()%2){
                cout << "IMPOSSIBLE" << endl;
            }else{
                for(ll i = 0 ; i < c.size() && i+1<c.size(); i += 2){
                    cout << c[i] << 'C' << " " << c[i+1] << "C" <<endl;
                }
                for(ll i = 0 ; i < h.size() && i+1<h.size() ; i += 2){
                    cout << h[i] << 'H' << " " << h[i+1] << "H" << endl;
                }
                for(ll i = 0 ; i < ss.size()&& i+1<ss.size() ; i += 2){
                    cout << ss[i] << 'S' << " " << ss[i+1] << "S" << endl;
                }
                ll k=0;
                if(c.size()%2 == 1){
                    cout << c[c.size()-1] << 'C' << " " << d[k] << "D" << endl;
                    k++;
                }
                if(ss.size()%2 == 1){
                    cout << ss[ss.size()-1] << 'S' << " " << d[k] << "D" << endl;
                    k++;
                }
                if(h.size()%2 == 1){
                    cout << h[h.size()-1] << 'H' << " " << d[k] << "D" << endl;
                    k++;
                }
                for(ll i = k ; i < d.size() && i+1<d.size()  ; i += 2){
                    cout << d[i] << 'D' << " " << d[i+1] << "D" <<endl;
                }
            }
        }
        if(s == 'H'){
            if(h.size() < d.size()%2 + ss.size()%2 + c.size()%2){
                cout << "IMPOSSIBLE" << endl;
            }else{
                for(ll i = 0 ; i < d.size()&& i+1<d.size() ; i += 2){
                    cout << d[i] << 'D' << " " << d[i+1] << "D" <<endl;
                }
                for(ll i = 0 ; i < c.size() && i+1<c.size(); i += 2){
                    cout << c[i] << 'C' << " " << c[i+1] << "C" << endl;
                }
                for(ll i = 0 ; i < ss.size()&& i+1<ss.size() ; i += 2){
                    cout << ss[i] << 'S' << " " << ss[i+1] << "S" << endl;
                }
                ll k=0;
                if(d.size()%2 == 1){
                    cout << d[d.size()-1] << 'D' << " " << h[k] << "H" << endl;
                    k++;
                }
                if(ss.size()%2 == 1){
                    cout << ss[ss.size()-1] << 'S' << " " << h[k] << "H" << endl;
                    k++;
                }
                if(c.size()%2 == 1){
                    cout << c[c.size()-1] << 'C' << " " << h[k] << "H" << endl;
                    k++;
                }
                for(ll i = k ; i < h.size() && i+1 < h.size(); i += 2){
                    cout << h[i] << 'H' << " " << h[i+1] << "H" <<endl;
                }
            }
        }
        if(s == 'S'){
            if(ss.size() < d.size()%2 + c.size()%2 + h.size()%2){
                cout << "IMPOSSIBLE" << endl;
            }else{
                for(ll i = 0 ; i < d.size() && i+1<d.size(); i += 2){
                    cout << d[i] << 'D' << " " << d[i+1] << "D" <<endl;
                }
                for(ll i = 0 ; i < h.size() && i+1<h.size(); i += 2){
                    cout << h[i] << 'H' << " " << h[i+1] << "H" << endl;
                }
                for(ll i = 0 ; i < c.size() && i+1<c.size(); i += 2){
                    cout << c[i] << 'C' << " " << c[i+1] << "C" << endl;
                }
                ll k=0;
                if(d.size()%2 == 1){
                    cout << d[d.size()-1] << 'D' << " " << ss[k] << "S" << endl;
                    k++;
                }
                if(c.size()%2 == 1){
                    cout << c[c.size()-1] << 'C' << " " << ss[k] << "S" << endl;
                    k++;
                }
                if(h.size()%2 == 1){
                    cout << h[h.size()-1] << 'H' << " " << ss[k] << "S" << endl;
                    k++;
                }
                for(ll i = k ; i < ss.size() && i+1 < ss.size() ; i += 2){
                    cout << ss[i] << 'S' << " " << ss[i+1] << "S" <<endl;
                }
            }
        }
    }
    return 0;
}
