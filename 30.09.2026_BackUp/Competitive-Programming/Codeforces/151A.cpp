// Codeforces 151A - Soft Drinking | Greedy, min of resources
#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toastsFromDrink = (k * l) / nl;
    int toastsFromLimes = c * d;
    int toastsFromSalt = p / np;
    int totalToasts = min(toastsFromDrink, min(toastsFromLimes, toastsFromSalt));
    int toastsPerFriend = totalToasts / n;
    cout << toastsPerFriend << endl;
    return 0;    
}
