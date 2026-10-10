// Codeforces 158B - Taxi (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int c[5] = {};
  for (int i = 0, x; i < n; i++) {
    cin >> x;
    c[x]++;
  }
  int ans = c[4] + c[3];
  c[1] = max(0, c[1] - c[3]);
  ans += c[2] / 2;
  c[2] %= 2;
  ans += (c[2] * 2 + c[1] + 3) / 4;
  cout << ans << '\n';
}
