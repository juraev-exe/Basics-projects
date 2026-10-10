// Codeforces 236A - Boy or Girl (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  set<char> t(s.begin(), s.end());
  cout << (t.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';
}
