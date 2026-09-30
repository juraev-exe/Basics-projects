#include <iostream>
#include <string>
#include <algorithm>

// Helper: Add two number strings
std::string addStrings(std::string a, std::string b) {
    std::string result = "";
    int carry = 0;
    int i = a.size() - 1, j = b.size() - 1;
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result = char(sum % 10 + '0') + result;
        carry = sum / 10;
    }
    return result;
}

// Helper: Subtract two number strings (assumes a >= b)
std::string subtractStrings(std::string a, std::string b) {
    std::string result = "";
    int borrow = 0;
    int i = a.size() - 1, j = b.size() - 1;
    
    while (i >= 0) {
        int diff = (a[i] - '0') - borrow;
        if (j >= 0) diff -= (b[j--] - '0');
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result = char(diff + '0') + result;
        i--;
    }
    
    // Remove leading zeros
    size_t pos = result.find_first_not_of('0');
    return (pos == std::string::npos) ? "0" : result.substr(pos);
}

// Karatsuba multiplication
std::string karatsuba(std::string x, std::string y) {
    // Base case: single digit
    int n = std::max(x.size(), y.size());
    if (n == 1) {
        int result = (x[0] - '0') * (y[0] - '0');
        return std::to_string(result);
    }
    
    // Make lengths equal by padding with zeros
    while (x.size() < n) x = "0" + x;
    while (y.size() < n) y = "0" + y;
    
    // Split in half
    int m = n / 2;
    std::string a = x.substr(0, n - m);  // High part
    std::string b = x.substr(n - m);     // Low part
    std::string c = y.substr(0, n - m);
    std::string d = y.substr(n - m);
    
    // Three recursive calls
    std::string z0 = karatsuba(a, c);
    std::string z1 = karatsuba(b, d);
    std::string z2 = karatsuba(addStrings(a, b), addStrings(c, d));
    
    // z2 - z0 - z1
    std::string middle = subtractStrings(subtractStrings(z2, z0), z1);
    
    // Add appropriate zeros (multiply by 10^m and 10^(2m))
    for (int i = 0; i < 2 * m; i++) z0 += "0";
    for (int i = 0; i < m; i++) middle += "0";
    
    // Final result
    return addStrings(addStrings(z0, middle), z1);
}

int main() {
    std::string a, b;
    std::cin >> a >> b;

    std::cout << karatsuba(a, b) << std::endl;
    return 0;
}