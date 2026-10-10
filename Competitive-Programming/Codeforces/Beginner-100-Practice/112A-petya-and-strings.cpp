// Codeforces 112A - Petya and Strings (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b;
  cin >> a >> b;
  for (char& c : a) c = tolower(c);
  for (char& c : b) c = tolower(c);
  cout << (a < b ? -1 : a > b ? 1 : 0) << '\n';
}
