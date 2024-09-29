#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vll;
typedef vector<int> vi;

// Macro definitions
#define SORT(v) sort(v.begin(), v.end())
#define ADD(v, x) v.push_back(x)
#define REMOVE(v) v.pop_back()
#define LOOP(i, start, end) for (ll i = start; i < end; i++)
#define PRINT_NO cout << "NO" << endl
#define PRINT_YES cout << "YES" << endl
#define PRINT_no cout << "No" << endl
#define PRINT_yes cout << "Yes" << endl

// Additional macros for printing and input
#define PRINT_VECTOR(v) for(auto val : v) cout << val << ' '; cout << endl;
#define INPUT_VECTOR(v, n) for(int i = 0; i < n; i++) { int val; cin >> val; v.push_back(val); }

void compareArrays()
{
    int n;
    cin >> n;
    vi arr1, arr2;
    INPUT_VECTOR(arr1, n);
    INPUT_VECTOR(arr2, n);
    
    bool identical = true;
    bool reverse_identical = true;
    
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            identical = false;
        }
        if (arr1[i] != arr2[n - i - 1]) {
            reverse_identical = false;
        }
    }

    if (identical || reverse_identical) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
}

int main() {
    int test_cases; 
    cin >> test_cases;
    while(test_cases--) {
        compareArrays();
    }
    return 0;
}
