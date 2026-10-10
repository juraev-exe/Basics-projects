// Codeforces 486A - Calculating Function (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin >> n;
  cout << (n % 2 == 0 ? n / 2 : -(n + 1) / 2) << '\n';
}
