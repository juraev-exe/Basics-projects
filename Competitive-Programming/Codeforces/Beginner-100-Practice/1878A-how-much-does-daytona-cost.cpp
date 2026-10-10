// Codeforces 1878A - How Much Does Daytona Cost? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    bool ok = false;
    while (n--) {
      int x;
      cin >> x;
      ok |= x == k;
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
}
