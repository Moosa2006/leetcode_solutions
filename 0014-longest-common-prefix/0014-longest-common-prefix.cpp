class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        string ans = "";
        sort(strs.begin(),strs.end());

        int n = strs.size();
        string low = strs[0];
        string high = strs[n-1];
        int minlen = min(low.size(),high.size());
        for(int i=0;i<minlen;i++){
            
            if(low[i] != high[i] ){
                break;
            }
            ans += low[i];
            
        }
        return ans;
    }
};