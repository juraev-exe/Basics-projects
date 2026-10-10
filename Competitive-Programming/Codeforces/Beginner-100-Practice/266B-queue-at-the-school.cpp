// Codeforces 266B - Queue at the School (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, t;
  string s;
  cin >> n >> t >> s;
  while (t--) {
    for (int i = 0; i + 1 < n; i++)
      if (s[i] == 'B' && s[i + 1] == 'G') {
        swap(s[i], s[i + 1]);
        i++;
      }
  }
  cout << s << '\n';
}
