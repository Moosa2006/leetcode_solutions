class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n==0 || m==0 || n<m) return "";
        vector<int> need(128,0);
        vector<int> window(128,0);

        for(char ch:t){
            need[(unsigned char)ch]++;
        }


       int l=0;
       int matched=0;
       int sindex=-1;
       int minlen = INT_MAX;

        for(int right=0;right<n;right++){
            unsigned char current = s[right];
            window[current]++;

            if(need[current] >0 && window[current] <= need[current]){
                matched++;
            }
            
            while(matched == m){
                int currlen = right-l+1;

                if(currlen < minlen ){
                    minlen = currlen;
                    sindex = l;
                } 
                unsigned char leftchar = s[l];
                window[leftchar]--;

                if(need[leftchar] > 0 && window[leftchar] < need[leftchar]){
                    matched--;
                }

                l++;

            }
        }

        if(sindex == -1) return "";
        return s.substr(sindex,minlen);

    }
};