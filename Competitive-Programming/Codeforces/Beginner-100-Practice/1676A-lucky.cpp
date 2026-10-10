// Codeforces 1676A - Lucky? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int a = s[0] + s[1] + s[2], b = s[3] + s[4] + s[5];
    cout << (a == b ? "YES" : "NO") << '\n';
  }
}
