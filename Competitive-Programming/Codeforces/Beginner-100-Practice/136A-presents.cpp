// Codeforces 136A - Presents (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> p(n + 1);
  for (int i = 1, x; i <= n; i++) {
    cin >> x;
    p[x] = i;
  }
  for (int i = 1; i <= n; i++) cout << p[i] << ' ';
  cout << '\n';
}
