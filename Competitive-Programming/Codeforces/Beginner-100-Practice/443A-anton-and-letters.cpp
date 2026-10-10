// Codeforces 443A - Anton and Letters (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  getline(cin, s);
  set<char> t;
  for (char c : s)
    if (isalpha(c)) t.insert(c);
  cout << t.size() << '\n';
}
