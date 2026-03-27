#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int y; if (!(cin >> y)) return 0;
	for (int x = y + 1; ; ++x) {
		string s = to_string(x);
		array<int, 10> cnt{};
		bool ok = true;
		for (char c : s) {
			int d = c - '0';
			if (cnt[d]++) { ok = false; break; }
		}
		if (ok) { cout << x << '\n'; break; }
	}
	return 0;
}

