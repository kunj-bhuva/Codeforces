#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm> 

using namespace std;

vector<int> longestSubsequenceWithDifferenceK(vector<int>& arr, int k) {
    int n = arr.size();
    unordered_map<int, int> dp;  
    unordered_map<int, int> predecessor; 

    int maxLength = 1;
    int endElement = arr[0];

    for (int i = 0; i < n; ++i) {
        int current = arr[i];
        int prev = current - k;
        
        if (dp.find(prev) != dp.end() && dp[prev] + 1 > dp[current]) {
            dp[current] = dp[prev] + 1;
            predecessor[current] = prev;
        } else {
            dp[current] = 1;
        }
        
        if (dp[current] > maxLength) {
            maxLength = dp[current];
            endElement = current;
        }
    }

    vector<int> longestSubsequence;
    int current = endElement;
    while (dp.find(current) != dp.end()) {
        longestSubsequence.push_back(current);
        if (predecessor.find(current) == predecessor.end()) {
            break;
        }
        current = predecessor[current];
    }

    reverse(longestSubsequence.begin(), longestSubsequence.end());
    return longestSubsequence;
}

int main() {
    vector<int> arr = {1, 5,4, 7, 8, 5,7, 3, 4, 2, 10};
    int k = 3;
    vector<int> result = longestSubsequenceWithDifferenceK(arr, k);
    
    cout << "Longest subsequence with difference " << k << ": ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
