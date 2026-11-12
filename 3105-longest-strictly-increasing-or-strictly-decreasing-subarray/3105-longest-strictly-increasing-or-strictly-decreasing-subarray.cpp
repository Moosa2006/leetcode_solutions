class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int deccnt = 1;
        int maxdec=1;
        int inccnt = 1;
        int maxinc=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
            inccnt++;
            maxinc = max(inccnt,maxinc);
            deccnt=1;
            } 
            else if(nums[i]>nums[i+1]){
                deccnt++;
                maxdec = max(maxdec,deccnt);
                inccnt=1;
            }
            else{
                inccnt=1;
                deccnt=1;
            }
        }
        return max(maxinc,maxdec);
    }
};