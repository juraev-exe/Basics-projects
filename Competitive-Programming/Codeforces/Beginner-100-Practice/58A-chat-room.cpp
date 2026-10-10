// Codeforces 58A - Chat room (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  string w = "hello";
  int j = 0;
  for (char c : s)
    if (j < 5 && c == w[j]) j++;
  cout << (j == 5 ? "YES" : "NO") << '\n';
}
