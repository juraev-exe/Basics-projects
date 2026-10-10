// Codeforces 131A - cAPS lOCK (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  bool ok = true;
  for (int i = 1; i < (int)s.size(); i++)
    if (!isupper(s[i])) ok = false;
  if (ok) {
    for (char& c : s) c = islower(c) ? toupper(c) : tolower(c);
  }
  cout << s << '\n';
}
