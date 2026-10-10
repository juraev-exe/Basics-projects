// Codeforces 791A - Bear and Big Brother (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, y = 0;
  cin >> a >> b;
  while (a <= b) {
    a *= 3;
    b *= 2;
    ++y;
  }
  cout << y << '\n';
}
