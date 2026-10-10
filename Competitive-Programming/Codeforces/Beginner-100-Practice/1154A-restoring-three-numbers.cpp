// Codeforces 1154A - Restoring Three Numbers (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[4];
  for (int& x : a) cin >> x;
  sort(a, a + 4);
  for (int i = 0; i < 3; i++) cout << a[3] - a[i] << ' ';
  cout << '\n';
}
