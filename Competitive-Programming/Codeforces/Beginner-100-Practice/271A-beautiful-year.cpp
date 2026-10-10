// Codeforces 271A - Beautiful Year (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int y;
  cin >> y;
  for (++y;; ++y) {
    string s = to_string(y);
    set<char> t(s.begin(), s.end());
    if (t.size() == s.size()) {
      cout << y << '\n';
      break;
    }
  }
}
