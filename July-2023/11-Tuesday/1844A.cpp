#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;

    // The second player to move wins if and only if
    // n is a multiple of b but not a multiple of a.
    int n = b;
    while (n % a == 0) {
      n += b;
    }

    cout << n << endl;
  }

  return 0;
}
