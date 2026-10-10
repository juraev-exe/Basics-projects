// Codeforces 750A - New Year and Hurry (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  int time = 240 - k, ans = 0;
  for (int i = 1; i <= n && time >= 5 * i; i++) {
    time -= 5 * i;
    ans++;
  }
  cout << ans << '\n';
}
