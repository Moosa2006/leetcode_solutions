class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        int n = s.length();
        string doubledS = s+s;
        return doubledS.find(goal) != string::npos;
        
    }
};