// Codeforces 263A - Beautiful Matrix (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  for (int i = 0; i < 25; i++) {
    cin >> x;
    if (x) cout << abs(i / 5 - 2) + abs(i % 5 - 2) << '\n';
  }
}
