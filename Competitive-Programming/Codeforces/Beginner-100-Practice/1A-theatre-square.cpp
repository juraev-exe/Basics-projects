// Codeforces 1A - Theatre Square (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, m, a;
  cin >> n >> m >> a;
  cout << ((n + a - 1) / a) * ((m + a - 1) / a) << '\n';
}
