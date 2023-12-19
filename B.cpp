#include <iostream>

using namespace std;

long long findX(long long a, long long b) {
    long long x = (a ^ b);
    if ((x & (~a)) == 0) {
        return x;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        long long result = findX(a, b);
        cout << result << endl;
    }
    
    return 0;
}