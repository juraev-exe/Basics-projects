// Codeforces 1791A - Codeforces Checking (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  string s = "codeforces";
  while (t--) {
    char c;
    cin >> c;
    cout << (s.find(c) != string::npos ? "YES" : "NO") << '\n';
  }
}
