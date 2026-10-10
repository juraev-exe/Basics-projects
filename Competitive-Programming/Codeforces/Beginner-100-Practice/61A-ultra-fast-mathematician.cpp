// Codeforces 61A - Ultra-Fast Mathematician (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < (int)a.size(); i++) cout << (a[i] == b[i] ? '0' : '1');
  cout << '\n';
}
