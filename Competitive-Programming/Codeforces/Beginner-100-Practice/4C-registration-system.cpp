// Codeforces 4C - Registration System (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  unordered_map<string, int> cnt;
  while (n--) {
    string s;
    cin >> s;
    if (!cnt[s]++)
      cout << "OK\n";
    else
      cout << s << cnt[s] - 1 << '\n';
  }
}
