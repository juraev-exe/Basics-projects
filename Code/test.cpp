#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, product = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        product *= (n % 10);
        n /= 10;    
    }
    cout << product;
    return 0;
}