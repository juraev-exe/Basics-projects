// Codeforces 469A - I Wanna Be the Guy (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<bool> v(n + 1);
  int p;
  cin >> p;
  while (p--) {
    int x;
    cin >> x;
    v[x] = 1;
  }
  int q;
  cin >> q;
  while (q--) {
    int x;
    cin >> x;
    v[x] = 1;
  }
  for (int i = 1; i <= n; i++)
    if (!v[i]) {
      cout << "Oh, my keyboard!\n";
      return 0;
    }
  cout << "I become the guy.\n";
}
