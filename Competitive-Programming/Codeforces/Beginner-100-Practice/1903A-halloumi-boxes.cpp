// Codeforces 1903A - Halloumi Boxes (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    cout << ((k > 1 || is_sorted(a.begin(), a.end())) ? "YES" : "NO") << '\n';
  }
}
