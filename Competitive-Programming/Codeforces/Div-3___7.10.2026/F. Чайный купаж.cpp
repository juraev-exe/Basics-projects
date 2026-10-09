#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAXA = 1000000;

    vector<int> spf(MAXA + 1);

    for (int i = 0; i <= MAXA; i++)
        spf[i] = i;

    for (int i = 2; 1LL * i * i <= MAXA; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAXA; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }

    vector<int> squareFree(MAXA + 1);

    for (int x = 1; x <= MAXA; x++) {
        int y = x;
        int result = 1;

        while (y > 1) {
            int p = spf[y];
            int cnt = 0;

            while (y % p == 0) {
                y /= p;
                cnt++;
            }

            if (cnt % 2 == 1)
                result *= p;
        }

        squareFree[x] = result;
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<ll> count(MAXA + 1);

        for (int& x : a) {
            cin >> x;
            count[squareFree[x]]++;
        }

        ll answer = 0;
        set<int> oddPrimes;

        for (int x : a) {
            int y = squareFree[x];
            while (y > 1) {
                int p = spf[y];
                if (oddPrimes.find(p) != oddPrimes.end())
                    oddPrimes.erase(p);
                else
                    oddPrimes.insert(p);
                y /= p;
            }

            if (oddPrimes.size() <= 7) {
                int prefixKernel = 1;
                bool withinLimit = true;
                for (int p : oddPrimes) {
                    if (prefixKernel > MAXA / p) {
                        withinLimit = false;
                        break;
                    }
                    prefixKernel *= p;
                }
                if (withinLimit)
                    answer += count[prefixKernel];
            }
        }

        cout << answer << '\n';
    }

    return 0;
}