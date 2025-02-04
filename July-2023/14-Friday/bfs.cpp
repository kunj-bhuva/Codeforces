#include <iostream>
#include <vector>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Function to calculate the binomial coefficient nCr
int binomialCoefficient(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    int result = numerator / denominator;
    return result;
}

// Function to calculate the sum of binomial coefficients from nCr to nCn
int sumOfBinomialCoefficients(int n, int r)
{
    int sum = 0;
    for (int i = r; i <= n; i++)
    {
        sum += binomialCoefficient(n, i);
    }
    return sum;
}

std::vector<int> countConsecutiveOnes(const std::vector<int>& arr) {
    std::vector<int> consecutiveOnes;
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            count++;
        } else if (count > 0) {
            consecutiveOnes.push_back(count);
            count = 0;
        }
    }

    if (count > 0) {
        consecutiveOnes.push_back(count);
    }

    return consecutiveOnes;
}

void solve()
{
    int n, i, j;
    std::cin >> n >> i >> j;
    std::vector<int> arr(n);
    for (int k = 0; k < n; k++)
    {
        std::cin >> arr[k];
    }

    for (int k = 0; k < n; k++)
    {
        if (arr[k] > j)
            arr[k] = 0;
        else
            arr[k] = 1;
    }
    std::vector<int> a1 = countConsecutiveOnes(arr);

    int sum = 0;
    for (int l = 0; l < a1.size(); l++)
    {
        if (a1[l] >= i)
        {
            sum += sumOfBinomialCoefficients(a1[l], i);
        }
    }
    if(sum==1)
    std::cout << sum << std::endl;
    else cout<<sum+1<<endl;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
