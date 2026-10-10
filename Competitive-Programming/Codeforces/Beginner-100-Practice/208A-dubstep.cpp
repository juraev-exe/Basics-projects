// Codeforces 208A - Dubstep (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  string token;
  for (int i = 0; i < (int)s.size();) {
    if (s.substr(i, 3) == "WUB")
      i += 3;
    else {
      if (!token.empty()) token += ' ';
      while (i < (int)s.size() && s.substr(i, 3) != "WUB") token += s[i++];
    }
  }
  cout << token << '\n';
}
