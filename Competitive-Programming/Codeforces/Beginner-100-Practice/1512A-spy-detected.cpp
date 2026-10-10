// Codeforces 1512A - Spy Detected! (C++17)
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
    for (int i = 0; i < n; i++) {
      int cnt = 0;
      for (int j = 0; j < n; j++) cnt += (a[i] == a[j]);
      if (cnt == 1) {
        cout << i + 1 << '\n';
        break;
      }
    }
  }
}
