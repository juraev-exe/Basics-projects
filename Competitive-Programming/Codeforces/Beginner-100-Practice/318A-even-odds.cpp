// Codeforces 318A - Even Odds (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, k;
  cin >> n >> k;
  long long odds = (n + 1) / 2;
  cout << (k <= odds ? 2 * k - 1 : 2 * (k - odds)) << '\n';
}
