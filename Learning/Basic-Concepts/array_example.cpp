#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    // Simple array example
    int arr[] = {5, 3, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << (i + 1 < n ? ' ' : '\n');

    int sum = 0;
    for (int i = 0; i < n; ++i) sum += arr[i];
    cout << "Sum: " << sum << "\n";

    cout << "Average: " << fixed << setprecision(2) << (double)sum / n << "\n";

    int mx = arr[0], mn = arr[0];
    for (int i = 1; i < n; ++i) {
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    cout << "Max: " << mx << ", Min: " << mn << "\n";

    // Modify an element
    arr[2] = 10; // change the third element
    cout << "After modification: ";
    for (int x : arr) cout << x << ' ';
    cout << '\n';

    return 0;
}
