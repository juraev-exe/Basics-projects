// Codeforces 580A - Kefa and First Steps (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int prev = 0, cur = 0, ans = 0;
  for (int i = 0, x; i < n; i++) {
    cin >> x;
    if (i == 0 || x >= prev)
      cur++;
    else
      cur = 1;
    ans = max(ans, cur);
    prev = x;
  }
  cout << ans << '\n';
}
