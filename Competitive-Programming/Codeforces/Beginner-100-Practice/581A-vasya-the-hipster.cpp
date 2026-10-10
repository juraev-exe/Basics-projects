// Codeforces 581A - Vasya the Hipster (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  cout << min(a, b) << ' ' << abs(a - b) / 2 << '\n';
}
