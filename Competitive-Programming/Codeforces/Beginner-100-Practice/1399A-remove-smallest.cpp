// Codeforces 1399A - Remove Smallest (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    sort(a.begin(), a.end());
    bool ok = true;
    for (int i = 1; i < n; i++)
      if (a[i] - a[i - 1] > 1) ok = false;
    cout << (ok ? "YES" : "NO") << '\n';
  }
}
