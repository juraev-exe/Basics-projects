#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1, a2, a3, a4;
    int b1, b2, b3, b4;

    if (!(cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4)) {
        return 0;
    }

    int scoreA = a1 + a2 + a3 + a4;
    int scoreB = b1 + b2 + b3 + b4;

    if (scoreA > scoreB) {
        cout << 1 << '\n';
    } else if (scoreA < scoreB) {
        cout << 2 << '\n';
    } else {
        cout << "DRAW\n";
    }

    return 0;
}
