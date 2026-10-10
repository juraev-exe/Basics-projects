// Codeforces 155A - I_love_%username% (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int x;
  cin >> x;
  int lo = x, hi = x, ans = 0;
  for (int i = 1; i < n; i++) {
    cin >> x;
    if (x < lo) lo = x, ans++;
    if (x > hi) hi = x, ans++;
  }
  cout << ans << '\n';
}
