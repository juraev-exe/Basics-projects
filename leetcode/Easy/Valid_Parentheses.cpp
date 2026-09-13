#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else if (!st.empty()) {
                char top = st.top();
                if ((top == '(' && ch == ')') ||
                    (top == '{' && ch == '}') ||
                    (top == '[' && ch == ']')) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    string s = "()[]{}";
    cout << boolalpha << sol.isValid(s) << '\n';
    return 0;
}
