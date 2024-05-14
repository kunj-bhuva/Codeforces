#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> prime_factorize(int n) {
    std::vector<int> factors;
    // Find and store all 2's
    while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }
    // n must be odd at this point, we can skip even numbers
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        // While i divides n, store i and divide n
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }
    // If n is a prime greater than 2, add it to factors
    if (n > 2)
        factors.push_back(n);
    return factors;
}

std::string is_product_of_binary_decimals(int n) {
    // Prime factorize n
    std::vector<int> prime_factors = prime_factorize(n);
    for (int factor : prime_factors) {
        bool found = false;
        // Check if factor is a power of 2
        for (int k = 0; k < std::to_string(n).length(); ++k) {
            if (factor == pow(2, k)) {
                found = true;
                break;
            }
        }
        if (!found)
            return "NO";
    }
    return "YES";
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << is_product_of_binary_decimals(n) << std::endl;
    return 0;
}
