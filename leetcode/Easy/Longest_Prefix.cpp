#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Edge case: if array is empty
        if (strs.empty()) {
            return "";
        }
        
        // Get the length of the first string (minimum possible prefix length)
        int minLen = strs[0].length();
        
        // Vertical scanning approach: compare characters at each position
        for (int col = 0; col < minLen; col++) {
            char ch = strs[0][col];
            
            // Check if all strings have the same character at position col
            for (int row = 1; row < strs.size(); row++) {
                if (strs[row][col] != ch) {
                    // Mismatch found, return prefix up to this point
                    return strs[0].substr(0, col);
                }
            }
        }
        
        // All characters matched, return the first string (or any string)
        return strs[0];
    }
};

// Test function
int main() {
    Solution solution;
    
    // Test case 1
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Test 1: " << solution.longestCommonPrefix(strs1) << endl;  // Expected: "fl"
    
    // Test case 2
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Test 2: " << solution.longestCommonPrefix(strs2) << endl;  // Expected: ""
    
    // Test case 3
    vector<string> strs3 = {"a"};
    cout << "Test 3: " << solution.longestCommonPrefix(strs3) << endl;  // Expected: "a"
    
    // Test case 4
    vector<string> strs4 = {"ab", "a"};
    cout << "Test 4: " << solution.longestCommonPrefix(strs4) << endl;  // Expected: "a"
    
    // Test case 5
    vector<string> strs5 = {"", "b"};
    cout << "Test 5: " << solution.longestCommonPrefix(strs5) << endl;  // Expected: ""
    
    return 0;
}
