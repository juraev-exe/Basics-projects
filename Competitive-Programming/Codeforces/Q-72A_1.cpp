#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cout << "Enter two integers separated by space: ";
    if (!(cin >> a >> b)) {
        return 0;
    }
    cout << "Sum: " << (a + b) << '\n';
    return 0;
}


