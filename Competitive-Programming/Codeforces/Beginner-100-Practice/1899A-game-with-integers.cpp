// Codeforces 1899A - Game with Integers (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << (n % 3 == 0 ? "Second" : "First") << '\n';
  }
  return 0;
}
