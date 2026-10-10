// Codeforces 122A - Lucky Division (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  bool ok = false;
  for (int x : {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777})
    if (n % x == 0) ok = true;
  cout << (ok ? "YES" : "NO") << '\n';
}
