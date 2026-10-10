// Codeforces 118A - String Task (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  for (char c : s) {
    c = tolower(c);
    if (string("aoyeui").find(c) == string::npos) cout << '.' << c;
  }
  cout << '\n';
}
