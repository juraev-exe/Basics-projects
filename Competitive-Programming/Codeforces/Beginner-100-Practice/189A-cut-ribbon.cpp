// Codeforces 189A - Cut Ribbon (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<int> dp(n + 1, -1000000);
  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
    if (i >= a) dp[i] = max(dp[i], dp[i - a] + 1);
    if (i >= b) dp[i] = max(dp[i], dp[i - b] + 1);
    if (i >= c) dp[i] = max(dp[i], dp[i - c] + 1);
  }
  cout << dp[n] << '\n';
}
