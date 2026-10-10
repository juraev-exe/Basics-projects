// Codeforces 996A - Hit the Lottery (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int d : {100, 20, 10, 5, 1}) ans += n / d, n %= d;
  cout << ans << '\n';
}
