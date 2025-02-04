#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <stack>
using namespace std;

typedef long long ll;
typedef vector<long long int> vll;

// Function to check if a number is a power of two
bool isPowerOfTwo(long long n)
{
    return n && !(n & (n - 1));
}

// Main function to solve the problem
void solve()
{
    int num_elements;
    long long target_sum;
    cin >> num_elements >> target_sum;
    vector<long long> array(num_elements);
    for (int i = 0; i < num_elements; i++)
    {
        cin >> array[i];
    }
    long long total_sum = accumulate(array.begin(), array.end(), 0LL);
    if (total_sum <= target_sum)
    {
        cout << num_elements << endl;
        return;
    }

    long long left_sum = target_sum / 2 + target_sum % 2;
    long long right_sum = target_sum / 2;
    long long left_curr_sum = 0, right_curr_sum = 0, left_index = 0, right_index = num_elements - 1;
    long long  count = 0;

    while (left_curr_sum <= left_sum)
    {
        if (left_curr_sum + array[left_index] <= left_sum)
        {
            left_curr_sum += array[left_index];
            left_index++;
            count++;
        }
        else
        {
            break;
        }
    }

    while (right_curr_sum <= right_sum)
    {
        if (right_curr_sum + array[right_index] <= right_sum)
        {
            right_curr_sum += array[right_index];
            right_index--;
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
}

int main()
{
    int lll;
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}

// KUNJ_BHUVA