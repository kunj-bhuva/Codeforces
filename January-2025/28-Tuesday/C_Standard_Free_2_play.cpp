#include <iostream>

int main() {
    int n = 100000;
    double harmonic_sum = 0.0;

    for (int k = 1; k <= n; k++) {
        harmonic_sum += 1.0 / k;
    }

    std::cout << "Harmonic sum for n = " << n << " is: " << 10000*harmonic_sum << std::endl;
    return 0;
}
