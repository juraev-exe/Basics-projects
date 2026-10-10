// Codeforces 705A - Hulk (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i > 1) cout << " that ";
    cout << (i % 2 ? "I hate" : "I love");
  }
  cout << " it\n";
}
