// Codeforces 339B - Xenia and Ringroad (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  long long cur = 1, ans = 0;
  while (m--) {
    int x;
    cin >> x;
    ans += (x - cur + n) % n;
    cur = x;
  }
  cout << ans << '\n';
}
