// Codeforces 200B - Drinks (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  double sum = 0;
  for (int i = 0, x; i < n; i++) {
    cin >> x;
    sum += x;
  }
  cout << fixed << setprecision(12) << sum / n << '\n';
}
