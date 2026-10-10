// Codeforces 116A - Tram (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, cur = 0, ans = 0;
  cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;
    cur += b - a;
    ans = max(ans, cur);
  }
  cout << ans << '\n';
}
