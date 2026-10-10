// Codeforces 1409A - Yet Another Two Integers Problem (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    cout << (abs(a - b) + 9) / 10 << '\n';
  }
}
