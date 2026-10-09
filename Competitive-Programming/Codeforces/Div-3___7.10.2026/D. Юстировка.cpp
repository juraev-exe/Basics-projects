#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll INF = 4'000'000'000'000'000'000LL;

ll need(ll a, ll b, ll c, ll target) {
    ll sum = a + b + c;

    if (sum >= target)
        return 0;

    if (a == b && b == c)
        return INF;

    if (a <= b && b <= c) {
        ll setup1 = b - a + 1;
        ll setup2 = c - b + 1;
        ll setup = min(setup1, setup2);

        return target - sum + 2 * setup;
    }

    return target - sum;
}

bool possible(ll target, ll k, const vector<array<ll, 3>>& labs) {
    ll used = 0;

    for (auto [a, b, c] : labs) {
        ll operations = need(a, b, c, target);

        if (operations >= INF)
            return false;

        if (operations > k - used)
            return false;

        used += operations;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll k;

        cin >> n >> k;

        vector<array<ll, 3>> labs(n);

        ll low = INF;

        for (int i = 0; i < n; i++) {
            cin >> labs[i][0]
                >> labs[i][1]
                >> labs[i][2];

            ll sum = labs[i][0] + labs[i][1] + labs[i][2];
            low = min(low, sum);
        }

        ll high = low + k + 1;

        while (low + 1 < high) {
            ll mid = low + (high - low) / 2;

            if (possible(mid, k, labs))
                low = mid;
            else
                high = mid;
        }

        cout << low << '\n';
    }

    return 0;
}