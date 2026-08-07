class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        string T = "^";
        for(char c : s){
            T += "#";
            T += c;
        }
        T += "#$";
        int n = T.length();
        vector<int> P(n,0);
        int C = 0;
        int R = 0;

        int max_len = 0;
        int center_index = 0;

        for(int i=1;i<n-1;i++){
            int i_mirror = 2*C-i;

            if(R>i){
                P[i] = min(R-i, P[i_mirror]);
            }
            while(T[i+1+P[i]] == T[i-1-P[i]]){
                P[i]++;
            }
            if(i+P[i]>R){
                C=i;
                R=i+P[i];
            }
            if(P[i] > max_len){
                max_len = P[i];
                center_index = i;
            }
        }
        int start = (center_index - max_len)/2;
        return s.substr(start, max_len);
    }
};