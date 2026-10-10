// Codeforces 282A - Bit++ (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x = 0;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if (s.find("++") != string::npos)
      ++x;
    else
      --x;
  }
  cout << x << '\n';
}
