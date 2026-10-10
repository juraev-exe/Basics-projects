// Codeforces 133A - HQ9+ (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  cout << (s.find_first_of("HQ9") != string::npos ? "YES" : "NO") << '\n';
}
