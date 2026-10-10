// Codeforces 1703A - YES or YES? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    for (char& c : s) c = tolower(c);
    cout << (s == "yes" ? "YES" : "NO") << '\n';
  }
}
