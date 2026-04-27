#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h;
    if (!(cin >> n >> h)) return 0;
    int width = 0;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        width += (a > h) ? 2 : 1;
    }
    cout << width << '\n';
    return 0;
}
