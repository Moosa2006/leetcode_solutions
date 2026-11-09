class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       int n= nums.size();
       vector<string> st;
       
       int low =0;
       int index=0;
       int high=1;
       for(int i=0;i<n;i++){
    int start = nums[i];
       while(i+1 < n && (long long)nums[i]+1 == nums[i+1]){
       i++;
       }
       if(start == nums[i]){
        st.push_back(to_string(start));
       }
       else{
        st.push_back(to_string(start)+"->"+to_string(nums[i]));
       }
       }
        
       return st; 
    }
};