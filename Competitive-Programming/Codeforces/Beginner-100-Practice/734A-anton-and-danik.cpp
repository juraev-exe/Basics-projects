// Codeforces 734A - Anton and Danik (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  string s;
  cin >> n >> s;
  int a = count(s.begin(), s.end(), 'A');
  cout << (a > n - a ? "Anton" : a < n - a ? "Danik" : "Friendship") << '\n';
}
