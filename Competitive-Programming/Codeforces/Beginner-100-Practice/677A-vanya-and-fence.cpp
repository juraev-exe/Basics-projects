// Codeforces 677A - Vanya and Fence (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, h, ans = 0;
  cin >> n >> h;
  while (n--) {
    int x;
    cin >> x;
    ans += (x > h ? 2 : 1);
  }
  cout << ans << '\n';
}
