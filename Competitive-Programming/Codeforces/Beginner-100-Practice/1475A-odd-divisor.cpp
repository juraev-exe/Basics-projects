// Codeforces 1475A - Odd Divisor (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    while (n % 2 == 0) n /= 2;
    cout << (n > 1 ? "YES" : "NO") << '\n';
  }
}
