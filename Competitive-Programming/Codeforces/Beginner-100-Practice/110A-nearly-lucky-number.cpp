// Codeforces 110A - Nearly Lucky Number (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int c = 0;
  for (char x : s)
    if (x == '4' || x == '7') c++;
  cout << (c == 4 || c == 7 ? "YES" : "NO") << '\n';
}
