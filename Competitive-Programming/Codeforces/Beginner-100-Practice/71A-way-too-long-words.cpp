// Codeforces 71A - Way Too Long Words (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if (s.size() > 10)
      cout << s.front() << s.size() - 2 << s.back() << '\n';
    else
      cout << s << '\n';
  }
}
