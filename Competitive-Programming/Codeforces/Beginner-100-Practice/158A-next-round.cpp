// Codeforces 158A - Next Round (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int& x : a) cin >> x;
  int ans = 0;
  for (int x : a)
    if (x > 0 && x >= a[k - 1]) ++ans;
  cout << ans << '\n';
}
