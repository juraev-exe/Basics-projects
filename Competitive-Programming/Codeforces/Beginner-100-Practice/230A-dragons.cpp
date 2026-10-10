// Codeforces 230A - Dragons (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int s, n;
  cin >> s >> n;
  vector<pair<int, int>> a(n);
  for (auto& x : a) cin >> x.first >> x.second;
  sort(a.begin(), a.end());
  for (auto [b, c] : a) {
    if (s <= b) {
      cout << "NO\n";
      return 0;
    }
    s += c;
  }
  cout << "YES\n";
}
