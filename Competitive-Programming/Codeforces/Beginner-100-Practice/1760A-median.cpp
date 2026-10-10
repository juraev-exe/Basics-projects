// Codeforces 1760A - Median? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c - min({a, b, c}) - max({a, b, c}) << '\n';
  }
}
