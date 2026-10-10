// Codeforces 231A - Team (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  cin >> n;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    ans += (a + b + c >= 2);
  }
  cout << ans << '\n';
}
