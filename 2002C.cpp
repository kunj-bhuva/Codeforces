#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vll;
typedef vector<int> vi;

// Macro definitions
#define SORT_VECTOR(v) sort(v.begin(), v.end())
#define PUSH_BACK(v, x) v.push_back(x)
#define POP_BACK(v) v.pop_back()
#define LOOP(i, start, end) for (ll i = start; i < end; i++)
#define PRINT_NO cout << "NO" << endl
#define PRINT_YES cout << "YES" << endl
#define PRINT_no cout << "No" << endl
#define PRINT_yes cout << "Yes" << endl

// Additional macros for printing and input
#define PRINT_VECTOR(v) for(auto val : v) cout << val << ' '; cout << endl;
#define INPUT_VECTOR(v, n) for(int i = 0; i < n; i++) { int val; cin >> val; v.push_back(val); }

ll squaredDistance(ll x1, ll y1, ll x2, ll y2) 
{
     ll dx = x2 - x1;
     ll dy = y2 - y1;
     return dx * dx + dy * dy;
}

void evaluateDistance()
{
    ll n;
    cin >> n;
    vll x_coords(n), y_coords(n);
    
    for(ll i = 0; i < n; i++) {
        cin >> x_coords[i] >> y_coords[i];
    }
    
    ll xs, ys, xd, yd;
    cin >> xs >> ys >> xd >> yd;

    ll targetDist = squaredDistance(xs, ys, xd, yd);
    bool withinDistance = false;

    for(ll i = 0; i < n; i++) {
        if(targetDist >= squaredDistance(x_coords[i], y_coords[i], xd, yd)) {
            withinDistance = true;
            break;
        }
    }

    if(withinDistance) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        evaluateDistance();
    }
    return 0;
}
