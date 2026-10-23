class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length=0;
        int maxlen=0;
        int n = s.length();
        int left=0;
        unordered_map<char,int> seen;
        vector<int> present(256,0);
        for(int right=0;right<s.size();right++){
            unsigned char ci = s[right];
            while(present[ci]){
                unsigned char li = s[left];
                present[li] = 0;
                left++;
            }
            present[ci] = 1;
            // if(seen.count(s[right]) && seen[s[right]] >= left){
            //     left = seen[s[right]] + 1;
            // }
            // seen[s[right]] = right;
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};