#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long int> vii;
typedef vector<int> vi;

// Macro definitions
#define sort(t) sort(t.begin(),t.end())
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define fi(i, a, b) for (ll i = a; i < b; i++)
#define Na cout << "NO" << endl;
#define Ha cout << "YES" << endl;
#define na cout << "No" << endl
#define ha cout << "Yes" << endl

// Additional macros for printing and input
#define printv(v) for(auto i : v) cout << i << ' '; cout << endl;
#define ip(a, n) for(int i = 0; i < n; i++) { int xvyz; cin >> xvyz; a.push_back(xvyz); }

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the GCD of all elements in a vector
int findVectorGCD(const std::vector<int>& vec) {

    if (vec.empty()) {
        // Return a default value or handle the empty vector case
        return 0;
    }

    // Initialize gcd with the first element of the vector
    int gcdResult = vec[0];

    // Iterate through the rest of the elements and update the gcd
    for (size_t i = 1; i < vec.size(); ++i) {
        gcdResult = findGCD(gcdResult, vec[i]);
    }

    return gcdResult;
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vi a;

        ip(a,n);
        int c=0;
        int gcdResult = findVectorGCD(a);
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)c++;
        }
        if(gcdResult>1) Na
        else if(gcdResult==1&&c>1) Na
        else Ha
        // Your code logic goes here
    }
    return 0;
}