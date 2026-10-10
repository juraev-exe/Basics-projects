// Codeforces 1030A - In Search of an Easy Problem (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  bool hard = false;
  while (n--) {
    int x;
    cin >> x;
    hard |= x;
  }
  cout << (hard ? "HARD" : "EASY") << '\n';
}
