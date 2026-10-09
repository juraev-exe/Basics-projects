#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> value(n);

        for (int x = 0; x <= n - 5; x++) {
            value[x] = a[x] + a[x + 2] - a[x + 4];
        }

        long long ans = 0;

        for (int x = 0; x <= n - 5; x++) {
            for (int y = x + 1; y <= n - 5; y++) {

                if (abs(x - y) >= 5 &&
                    value[x] == value[y]) {
                    ans++;
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}