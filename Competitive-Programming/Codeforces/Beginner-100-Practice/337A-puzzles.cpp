// Codeforces 337A - Puzzles (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (int& x : a) cin >> x;
  sort(a.begin(), a.end());
  int ans = INT_MAX;
  for (int i = 0; i + n <= m; i++) ans = min(ans, a[i + n - 1] - a[i]);
  cout << ans << '\n';
}
