// Codeforces 1857A - Array Coloring (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int s = 0;
    while (n--) {
      int x;
      cin >> x;
      s += x;
    }
    cout << (s % 2 ? "NO" : "YES") << '\n';
  }
}
