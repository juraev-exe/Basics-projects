# Codeforces Beginner 100 - Answers

Official links + GNU C++17 solution for each problem, in README order.

## [4A - Watermelon](https://codeforces.com/problemset/problem/4/A)
```cpp
// Codeforces 4A - Watermelon (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int w;
  cin >> w;
  cout << (w > 2 && w % 2 == 0 ? "YES" : "NO") << '\n';
}
```

## [71A - Way Too Long Words](https://codeforces.com/problemset/problem/71/A)
```cpp
// Codeforces 71A - Way Too Long Words (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if (s.size() > 10)
      cout << s.front() << s.size() - 2 << s.back() << '\n';
    else
      cout << s << '\n';
  }
}
```

## [231A - Team](https://codeforces.com/problemset/problem/231/A)
```cpp
// Codeforces 231A - Team (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  cin >> n;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    ans += (a + b + c >= 2);
  }
  cout << ans << '\n';
}
```

## [282A - Bit++](https://codeforces.com/problemset/problem/282/A)
```cpp
// Codeforces 282A - Bit++ (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x = 0;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if (s.find("++") != string::npos)
      ++x;
    else
      --x;
  }
  cout << x << '\n';
}
```

## [158A - Next Round](https://codeforces.com/problemset/problem/158/A)
```cpp
// Codeforces 158A - Next Round (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int& x : a) cin >> x;
  int ans = 0;
  for (int x : a)
    if (x > 0 && x >= a[k - 1]) ++ans;
  cout << ans << '\n';
}
```

## [50A - Domino Piling](https://codeforces.com/problemset/problem/50/A)
```cpp
// Codeforces 50A - Domino Piling (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long m, n;
  cin >> m >> n;
  cout << m * n / 2 << '\n';
}
```

## [263A - Beautiful Matrix](https://codeforces.com/problemset/problem/263/A)
```cpp
// Codeforces 263A - Beautiful Matrix (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  for (int i = 0; i < 25; i++) {
    cin >> x;
    if (x) cout << abs(i / 5 - 2) + abs(i % 5 - 2) << '\n';
  }
}
```

## [1A - Theatre Square](https://codeforces.com/problemset/problem/1/A)
```cpp
// Codeforces 1A - Theatre Square (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, m, a;
  cin >> n >> m >> a;
  cout << ((n + a - 1) / a) * ((m + a - 1) / a) << '\n';
}
```

## [112A - Petya and Strings](https://codeforces.com/problemset/problem/112/A)
```cpp
// Codeforces 112A - Petya and Strings (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b;
  cin >> a >> b;
  for (char& c : a) c = tolower(c);
  for (char& c : b) c = tolower(c);
  cout << (a < b ? -1 : a > b ? 1 : 0) << '\n';
}
```

## [236A - Boy or Girl](https://codeforces.com/problemset/problem/236/A)
```cpp
// Codeforces 236A - Boy or Girl (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  set<char> t(s.begin(), s.end());
  cout << (t.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';
}
```

## [339A - Helpful Maths](https://codeforces.com/problemset/problem/339/A)
```cpp
// Codeforces 339A - Helpful Maths (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  vector<char> v;
  for (char c : s)
    if (c != '+') v.push_back(c);
  sort(v.begin(), v.end());
  for (int i = 0; i < (int)v.size(); i++) {
    if (i) cout << '+';
    cout << v[i];
  }
  cout << '\n';
}
```

## [281A - Word Capitalization](https://codeforces.com/problemset/problem/281/A)
```cpp
// Codeforces 281A - Word Capitalization (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  s[0] = toupper(s[0]);
  cout << s << '\n';
}
```

## [791A - Bear and Big Brother](https://codeforces.com/problemset/problem/791/A)
```cpp
// Codeforces 791A - Bear and Big Brother (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, y = 0;
  cin >> a >> b;
  while (a <= b) {
    a *= 3;
    b *= 2;
    ++y;
  }
  cout << y << '\n';
}
```

## [617A - Elephant](https://codeforces.com/problemset/problem/617/A)
```cpp
// Codeforces 617A - Elephant (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;
  cout << (x + 4) / 5 << '\n';
}
```

## [266A - Stones on the Table](https://codeforces.com/problemset/problem/266/A)
```cpp
// Codeforces 266A - Stones on the Table (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  string s;
  cin >> n >> s;
  for (int i = 1; i < n; i++) ans += (s[i] == s[i - 1]);
  cout << ans << '\n';
}
```

## [546A - Soldier and Bananas](https://codeforces.com/problemset/problem/546/A)
```cpp
// Codeforces 546A - Soldier and Bananas (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long k, n, w;
  cin >> k >> n >> w;
  long long cost = k * w * (w + 1) / 2;
  cout << max(0LL, cost - n) << '\n';
}
```

## [59A - Word](https://codeforces.com/problemset/problem/59/A)
```cpp
// Codeforces 59A - Word (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int u = 0, l = 0;
  for (char c : s)
    if (isupper(c))
      u++;
    else
      l++;
  for (char& c : s) c = (u > l ? toupper(c) : tolower(c));
  cout << s << '\n';
}
```

## [118A - String Task](https://codeforces.com/problemset/problem/118/A)
```cpp
// Codeforces 118A - String Task (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  for (char c : s) {
    c = tolower(c);
    if (string("aoyeui").find(c) == string::npos) cout << '.' << c;
  }
  cout << '\n';
}
```

## [977A - Wrong Subtraction](https://codeforces.com/problemset/problem/977/A)
```cpp
// Codeforces 977A - Wrong Subtraction (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  while (k--) {
    if (n % 10)
      n--;
    else
      n /= 10;
  }
  cout << n << '\n';
}
```

## [110A - Nearly Lucky Number](https://codeforces.com/problemset/problem/110/A)
```cpp
// Codeforces 110A - Nearly Lucky Number (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int c = 0;
  for (char x : s)
    if (x == '4' || x == '7') c++;
  cout << (c == 4 || c == 7 ? "YES" : "NO") << '\n';
}
```

## [69A - Young Physicist](https://codeforces.com/problemset/problem/69/A)
```cpp
// Codeforces 69A - Young Physicist (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long x = 0, y = 0, z = 0;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    x += a;
    y += b;
    z += c;
  }
  cout << (x == 0 && y == 0 && z == 0 ? "YES" : "NO") << '\n';
}
```

## [734A - Anton and Danik](https://codeforces.com/problemset/problem/734/A)
```cpp
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
```

## [96A - Football](https://codeforces.com/problemset/problem/96/A)
```cpp
// Codeforces 96A - Football (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  cout << (s.find("0000000") != string::npos ||
                   s.find("1111111") != string::npos
               ? "YES"
               : "NO")
       << '\n';
}
```

## [41A - Translation](https://codeforces.com/problemset/problem/41/A)
```cpp
// Codeforces 41A - Translation (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());
  cout << (a == b ? "YES" : "NO") << '\n';
}
```

## [677A - Vanya and Fence](https://codeforces.com/problemset/problem/677/A)
```cpp
// Codeforces 677A - Vanya and Fence (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, h, ans = 0;
  cin >> n >> h;
  while (n--) {
    int x;
    cin >> x;
    ans += (x > h ? 2 : 1);
  }
  cout << ans << '\n';
}
```

## [271A - Beautiful Year](https://codeforces.com/problemset/problem/271/A)
```cpp
// Codeforces 271A - Beautiful Year (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int y;
  cin >> y;
  for (++y;; ++y) {
    string s = to_string(y);
    set<char> t(s.begin(), s.end());
    if (t.size() == s.size()) {
      cout << y << '\n';
      break;
    }
  }
}
```

## [116A - Tram](https://codeforces.com/problemset/problem/116/A)
```cpp
// Codeforces 116A - Tram (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, cur = 0, ans = 0;
  cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;
    cur += b - a;
    ans = max(ans, cur);
  }
  cout << ans << '\n';
}
```

## [1030A - In Search of an Easy Problem](https://codeforces.com/problemset/problem/1030/A)
```cpp
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
```

## [266B - Queue at the School](https://codeforces.com/problemset/problem/266/B)
```cpp
// Codeforces 266B - Queue at the School (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, t;
  string s;
  cin >> n >> t >> s;
  while (t--) {
    for (int i = 0; i + 1 < n; i++)
      if (s[i] == 'B' && s[i + 1] == 'G') {
        swap(s[i], s[i + 1]);
        i++;
      }
  }
  cout << s << '\n';
}
```

## [467A - George and Accommodation](https://codeforces.com/problemset/problem/467/A)
```cpp
// Codeforces 467A - George and Accommodation (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;
    ans += (b - a >= 2);
  }
  cout << ans << '\n';
}
```

## [486A - Calculating Function](https://codeforces.com/problemset/problem/486/A)
```cpp
// Codeforces 486A - Calculating Function (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin >> n;
  cout << (n % 2 == 0 ? n / 2 : -(n + 1) / 2) << '\n';
}
```

## [58A - Chat room](https://codeforces.com/problemset/problem/58/A)
```cpp
// Codeforces 58A - Chat room (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  string w = "hello";
  int j = 0;
  for (char c : s)
    if (j < 5 && c == w[j]) j++;
  cout << (j == 5 ? "YES" : "NO") << '\n';
}
```

## [344A - Magnets](https://codeforces.com/problemset/problem/344/A)
```cpp
// Codeforces 344A - Magnets (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  string prev, s;
  cin >> n;
  while (n--) {
    cin >> s;
    if (s != prev) ans++;
    prev = s;
  }
  cout << ans << '\n';
}
```

## [200B - Drinks](https://codeforces.com/problemset/problem/200/B)
```cpp
// Codeforces 200B - Drinks (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  double sum = 0;
  for (int i = 0, x; i < n; i++) {
    cin >> x;
    sum += x;
  }
  cout << fixed << setprecision(12) << sum / n << '\n';
}
```

## [122A - Lucky Division](https://codeforces.com/problemset/problem/122/A)
```cpp
// Codeforces 122A - Lucky Division (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  bool ok = false;
  for (int x : {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777})
    if (n % x == 0) ok = true;
  cout << (ok ? "YES" : "NO") << '\n';
}
```

## [136A - Presents](https://codeforces.com/problemset/problem/136/A)
```cpp
// Codeforces 136A - Presents (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> p(n + 1);
  for (int i = 1, x; i <= n; i++) {
    cin >> x;
    p[x] = i;
  }
  for (int i = 1; i <= n; i++) cout << p[i] << ' ';
  cout << '\n';
}
```

## [160A - Twins](https://codeforces.com/problemset/problem/160/A)
```cpp
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
```

## [318A - Even Odds](https://codeforces.com/problemset/problem/318/A)
```cpp
// Codeforces 318A - Even Odds (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, k;
  cin >> n >> k;
  long long odds = (n + 1) / 2;
  cout << (k <= odds ? 2 * k - 1 : 2 * (k - odds)) << '\n';
}
```

## [228A - Is your horseshoe on the other hoof?](https://codeforces.com/problemset/problem/228/A)
```cpp
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
```

## [61A - Ultra-Fast Mathematician](https://codeforces.com/problemset/problem/61/A)
```cpp
// Codeforces 61A - Ultra-Fast Mathematician (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < (int)a.size(); i++) cout << (a[i] == b[i] ? '0' : '1');
  cout << '\n';
}
```

## [1328A - Divisibility Problem](https://codeforces.com/problemset/problem/1328/A)
```cpp
// Codeforces 1328A - Divisibility Problem (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    cout << (b - a % b) % b << '\n';
  }
}
```

## [705A - Hulk](https://codeforces.com/problemset/problem/705/A)
```cpp
// Codeforces 705A - Hulk (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i > 1) cout << " that ";
    cout << (i % 2 ? "I hate" : "I love");
  }
  cout << " it\n";
}
```

## [520A - Pangram](https://codeforces.com/problemset/problem/520/A)
```cpp
// Codeforces 520A - Pangram (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  string s;
  cin >> n >> s;
  set<char> x;
  for (char c : s) x.insert(tolower(c));
  cout << (x.size() == 26 ? "YES" : "NO") << '\n';
}
```

## [405A - Gravity Flip](https://codeforces.com/problemset/problem/405/A)
```cpp
// Codeforces 405A - Gravity Flip (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int& x : a) cin >> x;
  sort(a.begin(), a.end());
  for (int x : a) cout << x << ' ';
  cout << '\n';
}
```

## [133A - HQ9+](https://codeforces.com/problemset/problem/133/A)
```cpp
// Codeforces 133A - HQ9+ (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  cout << (s.find_first_of("HQ9") != string::npos ? "YES" : "NO") << '\n';
}
```

## [144A - Arrival of the General](https://codeforces.com/problemset/problem/144/A)
```cpp
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
```

## [469A - I Wanna Be the Guy](https://codeforces.com/problemset/problem/469/A)
```cpp
// Codeforces 469A - I Wanna Be the Guy (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<bool> v(n + 1);
  int p;
  cin >> p;
  while (p--) {
    int x;
    cin >> x;
    v[x] = 1;
  }
  int q;
  cin >> q;
  while (q--) {
    int x;
    cin >> x;
    v[x] = 1;
  }
  for (int i = 1; i <= n; i++)
    if (!v[i]) {
      cout << "Oh, my keyboard!\n";
      return 0;
    }
  cout << "I become the guy.\n";
}
```

## [996A - Hit the Lottery](https://codeforces.com/problemset/problem/996/A)
```cpp
// Codeforces 996A - Hit the Lottery (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int d : {100, 20, 10, 5, 1}) ans += n / d, n %= d;
  cout << ans << '\n';
}
```

## [443A - Anton and Letters](https://codeforces.com/problemset/problem/443/A)
```cpp
// Codeforces 443A - Anton and Letters (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  getline(cin, s);
  set<char> t;
  for (char c : s)
    if (isalpha(c)) t.insert(c);
  cout << t.size() << '\n';
}
```

## [148A - Insomnia cure](https://codeforces.com/problemset/problem/148/A)
```cpp
// Codeforces 148A - Insomnia cure (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  int ans = 0;
  for (int i = 1; i <= d; i++)
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) ans++;
  cout << ans << '\n';
}
```

## [479A - Expression](https://codeforces.com/problemset/problem/479/A)
```cpp
// Codeforces 479A - Expression (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  cout << max({a + b + c, a * b * c, (a + b) * c, a * (b + c), a + b * c,
               a * b + c})
       << '\n';
}
```

## [4C - Registration System](https://codeforces.com/problemset/problem/4/C)
```cpp
// Codeforces 4C - Registration System (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  unordered_map<string, int> cnt;
  while (n--) {
    string s;
    cin >> s;
    if (!cnt[s]++)
      cout << "OK\n";
    else
      cout << s << cnt[s] - 1 << '\n';
  }
}
```

## [785A - Anton and Polyhedrons](https://codeforces.com/problemset/problem/785/A)
```cpp
// Codeforces 785A - Anton and Polyhedrons (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if (s == "Tetrahedron")
      ans += 4;
    else if (s == "Cube")
      ans += 6;
    else if (s == "Octahedron")
      ans += 8;
    else if (s == "Dodecahedron")
      ans += 12;
    else
      ans += 20;
  }
  cout << ans << '\n';
}
```

## [1742A - Sum](https://codeforces.com/problemset/problem/1742/A)
```cpp
// Codeforces 1742A - Sum (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a + b == c || a + c == b || b + c == a) ? "YES" : "NO") << '\n';
  }
}
```

## [510A - Fox And Snake](https://codeforces.com/problemset/problem/510/A)
```cpp
// Codeforces 510A - Fox And Snake (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      cout << string(m, '#');
    else if (i % 4 == 1)
      cout << string(m - 1, '.') << '#';
    else
      cout << '#' << string(m - 1, '.');
    cout << '\n';
  }
}
```

## [580A - Kefa and First Steps](https://codeforces.com/problemset/problem/580/A)
```cpp
// Codeforces 580A - Kefa and First Steps (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int prev = 0, cur = 0, ans = 0;
  for (int i = 0, x; i < n; i++) {
    cin >> x;
    if (i == 0 || x >= prev)
      cur++;
    else
      cur = 1;
    ans = max(ans, cur);
    prev = x;
  }
  cout << ans << '\n';
}
```

## [1352A - Sum of Round Numbers](https://codeforces.com/problemset/problem/1352/A)
```cpp
// Codeforces 1352A - Sum of Round Numbers (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a;
    int p = 1;
    while (n) {
      if (n % 10) a.push_back((n % 10) * p);
      n /= 10;
      p *= 10;
    }
    cout << a.size() << '\n';
    for (int x : a) cout << x << ' ';
    cout << '\n';
  }
}
```

## [1335A - Candies and Two Sisters](https://codeforces.com/problemset/problem/1335/A)
```cpp
// Codeforces 1335A - Candies and Two Sisters (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    cout << (n - 1) / 2 << '\n';
  }
}
```

## [208A - Dubstep](https://codeforces.com/problemset/problem/208/A)
```cpp
// Codeforces 208A - Dubstep (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  string token;
  for (int i = 0; i < (int)s.size();) {
    if (s.substr(i, 3) == "WUB")
      i += 3;
    else {
      if (!token.empty()) token += ' ';
      while (i < (int)s.size() && s.substr(i, 3) != "WUB") token += s[i++];
    }
  }
  cout << token << '\n';
}
```

## [158B - Taxi](https://codeforces.com/problemset/problem/158/B)
```cpp
// Codeforces 158B - Taxi (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int c[5] = {};
  for (int i = 0, x; i < n; i++) {
    cin >> x;
    c[x]++;
  }
  int ans = c[4] + c[3];
  c[1] = max(0, c[1] - c[3]);
  ans += c[2] / 2;
  c[2] %= 2;
  ans += (c[2] * 2 + c[1] + 3) / 4;
  cout << ans << '\n';
}
```

## [268A - Games](https://codeforces.com/problemset/problem/268/A)
```cpp
// Codeforces 268A - Games (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, ans = 0;
  cin >> n;
  vector<int> h(n), a(n);
  for (int i = 0; i < n; i++) cin >> h[i] >> a[i];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) ans += (i != j && h[i] == a[j]);
  cout << ans << '\n';
}
```

## [25A - IQ Test](https://codeforces.com/problemset/problem/25/A)
```cpp
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
```

## [1899A - Game with Integers](https://codeforces.com/problemset/problem/1899/A)
```cpp
// Codeforces 1899A - Game with Integers (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << (n % 3 == 0 ? "Second" : "First") << '\n';
  }
  return 0;
}
```

## [141A - Amusing Joke](https://codeforces.com/problemset/problem/141/A)
```cpp
// Codeforces 141A - Amusing Joke (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b, c;
  cin >> a >> b >> c;
  a += b;
  sort(a.begin(), a.end());
  sort(c.begin(), c.end());
  cout << (a == c ? "YES" : "NO") << '\n';
}
```

## [723A - The New Year: Meeting Friends](https://codeforces.com/problemset/problem/723/A)
```cpp
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
```

## [131A - cAPS lOCK](https://codeforces.com/problemset/problem/131/A)
```cpp
// Codeforces 131A - cAPS lOCK (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  bool ok = true;
  for (int i = 1; i < (int)s.size(); i++)
    if (!isupper(s[i])) ok = false;
  if (ok) {
    for (char& c : s) c = islower(c) ? toupper(c) : tolower(c);
  }
  cout << s << '\n';
}
```

## [230A - Dragons](https://codeforces.com/problemset/problem/230/A)
```cpp
// Codeforces 230A - Dragons (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int s, n;
  cin >> s >> n;
  vector<pair<int, int>> a(n);
  for (auto& x : a) cin >> x.first >> x.second;
  sort(a.begin(), a.end());
  for (auto [b, c] : a) {
    if (s <= b) {
      cout << "NO\n";
      return 0;
    }
    s += c;
  }
  cout << "YES\n";
}
```

## [1703A - YES or YES?](https://codeforces.com/problemset/problem/1703/A)
```cpp
// Codeforces 1703A - YES or YES? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    for (char& c : s) c = tolower(c);
    cout << (s == "yes" ? "YES" : "NO") << '\n';
  }
}
```

## [230B - T-primes](https://codeforces.com/problemset/problem/230/B)
```cpp
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
```

## [427A - Police Recruits](https://codeforces.com/problemset/problem/427/A)
```cpp
// Codeforces 427A - Police Recruits (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, free = 0, ans = 0;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    if (x == -1) {
      if (free)
        free--;
      else
        ans++;
    } else
      free += x;
  }
  cout << ans << '\n';
}
```

## [151A - Soft Drinking](https://codeforces.com/problemset/problem/151/A)
```cpp
// Codeforces 151A - Soft Drinking (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  cout << min({k * l / nl, c * d, p / np}) / n << '\n';
}
```

## [630A - Again Twenty Five!](https://codeforces.com/problemset/problem/630/A)
```cpp
// Codeforces 630A - Again Twenty Five! (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin >> n;
  cout << 25 << '\n';
}
```

## [337A - Puzzles](https://codeforces.com/problemset/problem/337/A)
```cpp
// Codeforces 337A - Puzzles (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (int& x : a) cin >> x;
  sort(a.begin(), a.end());
  int ans = INT_MAX;
  for (int i = 0; i + n <= m; i++) ans = min(ans, a[i + n - 1] - a[i]);
  cout << ans << '\n';
}
```

## [155A - I_love_%username%](https://codeforces.com/problemset/problem/155/A)
```cpp
// Codeforces 155A - I_love_%username% (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int x;
  cin >> x;
  int lo = x, hi = x, ans = 0;
  for (int i = 1; i < n; i++) {
    cin >> x;
    if (x < lo) lo = x, ans++;
    if (x > hi) hi = x, ans++;
  }
  cout << ans << '\n';
}
```

## [750A - New Year and Hurry](https://codeforces.com/problemset/problem/750/A)
```cpp
// Codeforces 750A - New Year and Hurry (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  int time = 240 - k, ans = 0;
  for (int i = 1; i <= n && time >= 5 * i; i++) {
    time -= 5 * i;
    ans++;
  }
  cout << ans << '\n';
}
```

## [381A - Sereja and Dima](https://codeforces.com/problemset/problem/381/A)
```cpp
// Codeforces 381A - Sereja and Dima (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int& x : a) cin >> x;
  int l = 0, r = n - 1, s = 0, d = 0;
  for (int turn = 0; l <= r; turn++) {
    int x;
    if (a[l] > a[r])
      x = a[l++];
    else
      x = a[r--];
    if (turn % 2 == 0)
      s += x;
    else
      d += x;
  }
  cout << s << ' ' << d << '\n';
}
```

## [492B - Vanya and Lanterns](https://codeforces.com/problemset/problem/492/B)
```cpp
// Codeforces 492B - Vanya and Lanterns (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  double l;
  cin >> n >> l;
  vector<double> a(n);
  for (auto& x : a) cin >> x;
  sort(a.begin(), a.end());
  double ans = max(a[0], l - a.back());
  for (int i = 1; i < n; i++) ans = max(ans, (a[i] - a[i - 1]) / 2);
  cout << fixed << setprecision(10) << ans << '\n';
}
```

## [1669A - Division?](https://codeforces.com/problemset/problem/1669/A)
```cpp
// Codeforces 1669A - Division? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int r;
    cin >> r;
    cout << "Division ";
    if (r >= 1900)
      cout << 1;
    else if (r >= 1600)
      cout << 2;
    else if (r >= 1400)
      cout << 3;
    else
      cout << 4;
    cout << '\n';
  }
}
```

## [1475A - Odd Divisor](https://codeforces.com/problemset/problem/1475/A)
```cpp
// Codeforces 1475A - Odd Divisor (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    while (n % 2 == 0) n /= 2;
    cout << (n > 1 ? "YES" : "NO") << '\n';
  }
}
```

## [1903A - Halloumi Boxes](https://codeforces.com/problemset/problem/1903/A)
```cpp
// Codeforces 1903A - Halloumi Boxes (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    cout << ((k > 1 || is_sorted(a.begin(), a.end())) ? "YES" : "NO") << '\n';
  }
}
```

## [732A - Buy a Shovel](https://codeforces.com/problemset/problem/732/A)
```cpp
// Codeforces 732A - Buy a Shovel (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int k, r;
  cin >> k >> r;
  for (int i = 1;; i++)
    if ((k * i) % 10 == 0 || (k * i) % 10 == r) {
      cout << i << '\n';
      break;
    }
}
```

## [1676A - Lucky?](https://codeforces.com/problemset/problem/1676/A)
```cpp
// Codeforces 1676A - Lucky? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int a = s[0] + s[1] + s[2], b = s[3] + s[4] + s[5];
    cout << (a == b ? "YES" : "NO") << '\n';
  }
}
```

## [706B - Interesting Drink](https://codeforces.com/problemset/problem/706/B)
```cpp
// Codeforces 706B - Interesting Drink (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int& x : a) cin >> x;
  sort(a.begin(), a.end());
  int q;
  cin >> q;
  while (q--) {
    int m;
    cin >> m;
    cout << upper_bound(a.begin(), a.end(), m) - a.begin() << '\n';
  }
}
```

## [1154A - Restoring Three Numbers](https://codeforces.com/problemset/problem/1154/A)
```cpp
// Codeforces 1154A - Restoring Three Numbers (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[4];
  for (int& x : a) cin >> x;
  sort(a, a + 4);
  for (int i = 0; i < 3; i++) cout << a[3] - a[i] << ' ';
  cout << '\n';
}
```

## [1692A - Marathon](https://codeforces.com/problemset/problem/1692/A)
```cpp
// Codeforces 1692A - Marathon (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (b > a) + (c > a) + (d > a) << '\n';
  }
}
```

## [1807A - Plus or Minus](https://codeforces.com/problemset/problem/1807/A)
```cpp
// Codeforces 1807A - Plus or Minus (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b == c ? '+' : '-') << '\n';
  }
}
```

## [1999A - A+B Again?](https://codeforces.com/problemset/problem/1999/A)
```cpp
// Codeforces 1999A - A+B Again? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << n / 10 + n % 10 << '\n';
  }
}
```

## [1878A - How Much Does Daytona Cost?](https://codeforces.com/problemset/problem/1878/A)
```cpp
// Codeforces 1878A - How Much Does Daytona Cost? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    bool ok = false;
    while (n--) {
      int x;
      cin >> x;
      ok |= x == k;
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
}
```

## [1901A - Line Trip](https://codeforces.com/problemset/problem/1901/A)
```cpp
// Codeforces 1901A - Line Trip (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int prev = 0, ans = 0;
    for (int i = 0, a; i < n; i++) {
      cin >> a;
      ans = max(ans, a - prev);
      prev = a;
    }
    ans = max(ans, 2 * (x - prev));
    cout << ans << '\n';
  }
}
```

## [1857A - Array Coloring](https://codeforces.com/problemset/problem/1857/A)
```cpp
// Codeforces 1857A - Array Coloring (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int s = 0;
    while (n--) {
      int x;
      cin >> x;
      s += x;
    }
    cout << (s % 2 ? "NO" : "YES") << '\n';
  }
}
```

## [581A - Vasya the Hipster](https://codeforces.com/problemset/problem/581/A)
```cpp
// Codeforces 581A - Vasya the Hipster (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  cout << min(a, b) << ' ' << abs(a - b) / 2 << '\n';
}
```

## [1829B - Blank Space](https://codeforces.com/problemset/problem/1829/B)
```cpp
// Codeforces 1829B - Blank Space (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int cur = 0, ans = 0;
    while (n--) {
      int x;
      cin >> x;
      if (x == 0)
        ans = max(ans, ++cur);
      else
        cur = 0;
    }
    cout << ans << '\n';
  }
}
```

## [189A - Cut Ribbon](https://codeforces.com/problemset/problem/189/A)
```cpp
// Codeforces 189A - Cut Ribbon (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<int> dp(n + 1, -1000000);
  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
    if (i >= a) dp[i] = max(dp[i], dp[i - a] + 1);
    if (i >= b) dp[i] = max(dp[i], dp[i - b] + 1);
    if (i >= c) dp[i] = max(dp[i], dp[i - c] + 1);
  }
  cout << dp[n] << '\n';
}
```

## [1791A - Codeforces Checking](https://codeforces.com/problemset/problem/1791/A)
```cpp
// Codeforces 1791A - Codeforces Checking (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  string s = "codeforces";
  while (t--) {
    char c;
    cin >> c;
    cout << (s.find(c) != string::npos ? "YES" : "NO") << '\n';
  }
}
```

## [1399A - Remove Smallest](https://codeforces.com/problemset/problem/1399/A)
```cpp
// Codeforces 1399A - Remove Smallest (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    sort(a.begin(), a.end());
    bool ok = true;
    for (int i = 1; i < n; i++)
      if (a[i] - a[i - 1] > 1) ok = false;
    cout << (ok ? "YES" : "NO") << '\n';
  }
}
```

## [339B - Xenia and Ringroad](https://codeforces.com/problemset/problem/339/B)
```cpp
// Codeforces 339B - Xenia and Ringroad (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  long long cur = 1, ans = 0;
  while (m--) {
    int x;
    cin >> x;
    ans += (x - cur + n) % n;
    cur = x;
  }
  cout << ans << '\n';
}
```

## [1512A - Spy Detected!](https://codeforces.com/problemset/problem/1512/A)
```cpp
// Codeforces 1512A - Spy Detected! (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    for (int i = 0; i < n; i++) {
      int cnt = 0;
      for (int j = 0; j < n; j++) cnt += (a[i] == a[j]);
      if (cnt == 1) {
        cout << i + 1 << '\n';
        break;
      }
    }
  }
}
```

## [1760A - Median?](https://codeforces.com/problemset/problem/1760/A)
```cpp
// Codeforces 1760A - Median? (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c - min({a, b, c}) - max({a, b, c}) << '\n';
  }
}
```

## [1915A - Odd One Out](https://codeforces.com/problemset/problem/1915/A)
```cpp
// Codeforces 1915A - Odd One Out (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == b ? c : a == c ? b : a) << '\n';
  }
}
```

## [1409A - Yet Another Two Integers Problem](https://codeforces.com/problemset/problem/1409/A)
```cpp
// Codeforces 1409A - Yet Another Two Integers Problem (C++17)
// Local practice reference adapted from the user-provided solution list.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    cout << (abs(a - b) + 9) / 10 << '\n';
  }
}
```

