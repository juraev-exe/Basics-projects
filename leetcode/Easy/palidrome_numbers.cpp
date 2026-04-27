#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) return false;
        
        // Numbers ending in 0 are palindromes only if x == 0
        if (x != 0 && x % 10 == 0) return false;
        
        // Reverse the second half of the number
        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        
        // For even length: x == reversed
        // For odd length: x == reversed / 10 (ignores middle digit)
        return x == reversed || x == reversed / 10;
    }
};

int main() {
    Solution sol;
    
    // Test cases
    cout << "121 is palindrome: " << (sol.isPalindrome(121) ? "true" : "false") << endl;
    cout << "-121 is palindrome: " << (sol.isPalindrome(-121) ? "true" : "false") << endl;
    cout << "10 is palindrome: " << (sol.isPalindrome(10) ? "true" : "false") << endl;
    cout << "0 is palindrome: " << (sol.isPalindrome(0) ? "true" : "false") << endl;
    cout << "12321 is palindrome: " << (sol.isPalindrome(12321) ? "true" : "false") << endl;
    
    return 0;
}