// Codeforces 268A - Games (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  cin >> n;
  vector<int> h(n), a(n);
  for (int i = 0; i < n; i++) cin >> h[i] >> a[i];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) ans += (i != j && h[i] == a[j]);
  cout << ans << '\n';
}
