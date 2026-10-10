// Codeforces 69A - Young Physicist (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long x = 0, y = 0, z = 0;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    x += a;
    y += b;
    z += c;
  }
  cout << (x == 0 && y == 0 && z == 0 ? "YES" : "NO") << '\n';
}
