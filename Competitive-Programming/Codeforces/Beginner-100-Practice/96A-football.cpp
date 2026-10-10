// Codeforces 96A - Football (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  cout << (s.find("0000000") != string::npos ||
                   s.find("1111111") != string::npos
               ? "YES"
               : "NO")
       << '\n';
}
