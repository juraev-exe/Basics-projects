// Codeforces 339A - Helpful Maths (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  vector<char> v;
  for (char c : s)
    if (c != '+') v.push_back(c);
  sort(v.begin(), v.end());
  for (int i = 0; i < (int)v.size(); i++) {
    if (i) cout << '+';
    cout << v[i];
  }
  cout << '\n';
}
