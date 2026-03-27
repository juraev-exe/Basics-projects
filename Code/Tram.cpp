#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0;      // Current number of passengers in the tram
    int maxCapacity = 0;  // Maximum passengers at any time

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        // Passengers exit first
        current -= a;

        // Passengers enter after exits
        current += b;

        // Update the maximum capacity needed
        if (current > maxCapacity) {
            maxCapacity = current;
        }
    }

    // Output the minimum required capacity
    cout << maxCapacity << endl;

    return 0;
}
