// Codeforces 281A - Word Capitalization (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  s[0] = toupper(s[0]);
  cout << s << '\n';
}
