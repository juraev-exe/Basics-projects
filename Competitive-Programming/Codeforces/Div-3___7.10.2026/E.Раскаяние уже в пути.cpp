#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll cost(ll x, ll y) {
    return x == y ? 2 : 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n), b(n);

        for (ll &x : a)
            cin >> x;

        for (ll &x : b)
            cin >> x;

        ll thegrilla = 0;

        if (n == 1) {
            thegrilla = cost(a[0], b[0]);
            cout << thegrilla << '\n';
            continue;
        }

        vector<ll> vertical(n);
        vector<ll> forward(n - 1);
        vector<ll> backward(n - 1);

        for (int i = 0; i < n; i++)
            vertical[i] = cost(a[i], b[i]);

        for (int i = 0; i + 1 < n; i++) {
            forward[i] = cost(a[i], b[i + 1]);
            backward[i] = cost(a[i + 1], b[i]);
        }

        ll base = vertical[n - 1];

        for (int i = 0; i + 1 < n; i++)
            base += backward[i];

        ll prefix = 0;
        ll suffix = 0;

        for (int i = 0; i + 1 < n; i++)
            suffix += forward[i];

        thegrilla = base + suffix;

        for (int m = 1; m < n; m++) {
            prefix += vertical[m - 1];
            suffix -= forward[m - 1];

            thegrilla = max(thegrilla, base + prefix + suffix);
        }

        cout << thegrilla << '\n';
    }

    return 0;
}