class Solution {
public:
    int longestValidParentheses(string s) {
    
        int cnt = 0;
        int leftsum = 0;
        int rightsum = 0;

        // Left -> Right
        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(')
                leftsum++;
            else
                rightsum++;

            if (leftsum == rightsum)
                cnt = max(cnt, 2 * rightsum);

            if (rightsum > leftsum) {
                leftsum = 0;
                rightsum = 0;
            }
        }

        leftsum = 0;
        rightsum = 0;

        // Right -> Left
        for (int i = s.length() - 1; i >= 0; i--) {

            if (s[i] == '(')
                leftsum++;
            else
                rightsum++;

            if (leftsum == rightsum)
                cnt = max(cnt, 2 * leftsum);

            if (leftsum > rightsum) {
                leftsum = 0;
                rightsum = 0;
            }
        }

        return cnt;
    }

};