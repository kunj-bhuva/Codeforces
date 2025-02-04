//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
    int ma = 0;
    for (int i = 0; i < n; i++) {
        ma = max(ma, arr[i]);
    }
    
    vector<int> a(ma + 1, 0);
    
    for (int i = 0; i < n; i++) {
        a[arr[i]] = 1;
    }
    
    for (int i = 0; i < n; i++) {
        int k1 = arr[i] * arr[i];
        for (int j = i + 1; j < n; j++) {
            int k2 = arr[j] * arr[j];
            int k3 = k1 + k2;
            int c = sqrt(k3);

            if (c * c == k3 && a[c] == 1) {
                return true;
            }
        }
    }
    
    return false;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends