// Codeforces 479A - Expression (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  cout << max({a + b + c, a * b * c, (a + b) * c, a * (b + c), a + b * c,
               a * b + c})
       << '\n';
}
