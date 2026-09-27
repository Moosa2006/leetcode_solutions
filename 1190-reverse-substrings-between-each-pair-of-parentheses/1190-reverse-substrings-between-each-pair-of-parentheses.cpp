#include <string>
#include <stack>
#include <algorithm>

class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (c == ')') {
                string temp = "";
                // Pop characters until we find the matching '('
                while (!st.empty() && st.top() != '(') {
                    temp += st.top();
                    st.pop();
                }
                
                // Pop the '(' itself
                if (!st.empty()) {
                    st.pop();
                }
                
                // Push the characters back onto the stack. 
                // Since 'temp' was built by popping from the stack (LIFO), 
                // pushing them back restores their correct reversed order.
                for (char ch : temp) {
                    st.push(ch);
                }
            } else {
                // Push normal characters and '(' onto the stack
                st.push(c);
            }
        }
        
        // Collect everything remaining in the stack
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        
        // Because the stack is LIFO, the final string is built backward
        reverse(result.begin(), result.end());
        
        return result;
    }
};