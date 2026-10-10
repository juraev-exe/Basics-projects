// Codeforces 1669A - Division? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int r;
    cin >> r;
    cout << "Division ";
    if (r >= 1900)
      cout << 1;
    else if (r >= 1600)
      cout << 2;
    else if (r >= 1400)
      cout << 3;
    else
      cout << 4;
    cout << '\n';
  }
}
