#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int a1, a2, a3; cin >> a1 >> a2 >> a3;
        int arr[3] = {a1, a2, a3};
        sort(arr, arr+3);
        cout << arr[1] << "\n";
    }
    return 0;
}
