// Codeforces 25A - IQ Test (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int ev = 0;
  for (int& x : a) {
    cin >> x;
    ev += x % 2 == 0;
  }
  bool wantEven = ev == 1;
  for (int i = 0; i < n; i++)
    if ((a[i] % 2 == 0) == wantEven) {
      cout << i + 1 << '\n';
      break;
    }
}
