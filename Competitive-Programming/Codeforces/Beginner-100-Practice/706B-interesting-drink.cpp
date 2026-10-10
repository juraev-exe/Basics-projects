// Codeforces 706B - Interesting Drink (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int& x : a) cin >> x;
  sort(a.begin(), a.end());
  int q;
  cin >> q;
  while (q--) {
    int m;
    cin >> m;
    cout << upper_bound(a.begin(), a.end(), m) - a.begin() << '\n';
  }
}
