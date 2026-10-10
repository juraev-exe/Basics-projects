// Codeforces 344A - Magnets (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  string prev, s;
  cin >> n;
  while (n--) {
    cin >> s;
    if (s != prev) ans++;
    prev = s;
  }
  cout << ans << '\n';
}
