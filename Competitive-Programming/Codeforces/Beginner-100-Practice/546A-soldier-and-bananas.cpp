// Codeforces 546A - Soldier and Bananas (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long k, n, w;
  cin >> k >> n >> w;
  long long cost = k * w * (w + 1) / 2;
  cout << max(0LL, cost - n) << '\n';
}
