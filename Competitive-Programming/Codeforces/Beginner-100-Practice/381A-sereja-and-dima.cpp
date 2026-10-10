// Codeforces 381A - Sereja and Dima (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int& x : a) cin >> x;
  int l = 0, r = n - 1, s = 0, d = 0;
  for (int turn = 0; l <= r; turn++) {
    int x;
    if (a[l] > a[r])
      x = a[l++];
    else
      x = a[r--];
    if (turn % 2 == 0)
      s += x;
    else
      d += x;
  }
  cout << s << ' ' << d << '\n';
}
