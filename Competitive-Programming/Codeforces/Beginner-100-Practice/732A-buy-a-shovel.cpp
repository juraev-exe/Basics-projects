// Codeforces 732A - Buy a Shovel (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int k, r;
  cin >> k >> r;
  for (int i = 1;; i++)
    if ((k * i) % 10 == 0 || (k * i) % 10 == r) {
      cout << i << '\n';
      break;
    }
}
