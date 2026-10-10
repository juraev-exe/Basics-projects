// Codeforces 41A - Translation (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());
  cout << (a == b ? "YES" : "NO") << '\n';
}
