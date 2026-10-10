// Codeforces 59A - Word (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int u = 0, l = 0;
  for (char c : s)
    if (isupper(c))
      u++;
    else
      l++;
  for (char& c : s) c = (u > l ? toupper(c) : tolower(c));
  cout << s << '\n';
}
