// Codeforces 160A - Twins (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for (int& x : a) {
    cin >> x;
    sum += x;
  }
  sort(a.rbegin(), a.rend());
  int cur = 0, k = 0;
  while (cur <= sum - cur) cur += a[k++];
  cout << k << '\n';
}
