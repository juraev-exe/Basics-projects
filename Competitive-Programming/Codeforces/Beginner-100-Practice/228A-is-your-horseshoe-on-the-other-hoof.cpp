// Codeforces 228A - Is your horseshoe on the other hoof? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  set<int> s;
  for (int i = 0, x; i < 4; i++) {
    cin >> x;
    s.insert(x);
  }
  cout << 4 - s.size() << '\n';
}
