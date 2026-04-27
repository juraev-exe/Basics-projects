#include <iostream>

// The Solution class provided by the user
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        
        int prev2 = 1, prev1 = 2;
        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};

// Main function to make it a runnable program
int main() {
    Solution sol;
    // Example usage: calculate ways to climb 5 stairs
    int n_stairs = 5; 
    int result = sol.climbStairs(n_stairs);
    
    std::cout << "For " << n_stairs << " stairs, there are " << result << " distinct ways to climb." << std::endl;
    
    // You can test with other values as well
    // n_stairs = 3;
    // result = sol.climbStairs(n_stairs);
    // std::cout << "For " << n_stairs << " stairs, there are " << result << " distinct ways to climb." << std::endl;

    return 0;
}
