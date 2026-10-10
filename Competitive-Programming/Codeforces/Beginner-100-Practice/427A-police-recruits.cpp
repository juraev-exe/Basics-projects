// Codeforces 427A - Police Recruits (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, free = 0, ans = 0;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    if (x == -1) {
      if (free)
        free--;
      else
        ans++;
    } else
      free += x;
  }
  cout << ans << '\n';
}
