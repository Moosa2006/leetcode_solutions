class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k){
        string ans="";
        int n=s.length();
        for(int i=0;i<n;i=i+k){
        int sum=0;

            for(int j=0;j<k && i+j<n;j++){
                sum+=s[i+j]-'0';   
            }
            ans+=to_string(sum);
        }
        s=ans;
        }
        return s;
    }
};