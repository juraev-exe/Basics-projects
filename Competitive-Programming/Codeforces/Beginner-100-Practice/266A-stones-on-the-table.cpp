// Codeforces 266A - Stones on the Table (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  string s;
  cin >> n >> s;
  for (int i = 1; i < n; i++) ans += (s[i] == s[i - 1]);
  cout << ans << '\n';
}
