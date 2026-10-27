class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.size() == 0 || k<0) return 0;
        
        vector<int> freq(26,0);

        int left=0;
        int maxfreq=0;
        int maxlen=1;
        for(int i=0;i<s.size();i++){
            int index = s[i]-'A';
            freq[index]++;

            maxfreq = max(maxfreq,freq[index]);

            int currlen = i-left+1;

            if(currlen-maxfreq > k){
                freq[s[left]-'A']--;
                left++;
                
            }
            currlen = i-left+1;

            maxlen = max(maxlen,currlen);
        }
        return maxlen;
    }
};