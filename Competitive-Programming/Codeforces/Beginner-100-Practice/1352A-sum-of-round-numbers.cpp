// Codeforces 1352A - Sum of Round Numbers (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a;
    int p = 1;
    while (n) {
      if (n % 10) a.push_back((n % 10) * p);
      n /= 10;
      p *= 10;
    }
    cout << a.size() << '\n';
    for (int x : a) cout << x << ' ';
    cout << '\n';
  }
}
