// Codeforces 492B - Vanya and Lanterns (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  double l;
  cin >> n >> l;
  vector<double> a(n);
  for (auto& x : a) cin >> x;
  sort(a.begin(), a.end());
  double ans = max(a[0], l - a.back());
  for (int i = 1; i < n; i++) ans = max(ans, (a[i] - a[i - 1]) / 2);
  cout << fixed << setprecision(10) << ans << '\n';
}
