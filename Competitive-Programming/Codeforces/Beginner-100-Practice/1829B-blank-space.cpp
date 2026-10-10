// Codeforces 1829B - Blank Space (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int cur = 0, ans = 0;
    while (n--) {
      int x;
      cin >> x;
      if (x == 0)
        ans = max(ans, ++cur);
      else
        cur = 0;
    }
    cout << ans << '\n';
  }
}
