// Codeforces 467A - George and Accommodation (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;
    ans += (b - a >= 2);
  }
  cout << ans << '\n';
}
