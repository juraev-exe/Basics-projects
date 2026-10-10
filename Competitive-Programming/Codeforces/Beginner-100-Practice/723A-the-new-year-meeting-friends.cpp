// Codeforces 723A - The New Year: Meeting Friends (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int x[3] = {a, b, c};
  sort(x, x + 3);
  cout << x[2] - x[0] << '\n';
}
