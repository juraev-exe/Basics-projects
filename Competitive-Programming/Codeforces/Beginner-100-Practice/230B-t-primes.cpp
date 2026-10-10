// Codeforces 230B - T-primes (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<ll> a(n);
  ll mx = 0;
  for (auto& x : a) {
    cin >> x;
    mx = max(mx, x);
  }
  ll lim = sqrtl(mx) + 1;
  vector<bool> p(lim + 1, true);
  p[0] = p[1] = false;
  for (ll i = 2; i * i <= lim; i++)
    if (p[i])
      for (ll j = i * i; j <= lim; j += i) p[j] = false;
  for (ll x : a) {
    ll r = sqrtl(x);
    cout << (r * r == x && r <= lim && p[r] ? "YES" : "NO") << '\n';
  }
}
