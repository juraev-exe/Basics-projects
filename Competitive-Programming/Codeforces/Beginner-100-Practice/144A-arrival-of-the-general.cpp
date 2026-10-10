// Codeforces 144A - Arrival of the General (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int& x : a) cin >> x;
  int mx = max_element(a.begin(), a.end()) - a.begin();
  int mn = min_element(a.rbegin(), a.rend()) - a.rbegin();
  cout << mx + (n - 1 - mn) - (mx > n - 1 - mn) << '\n';
}
