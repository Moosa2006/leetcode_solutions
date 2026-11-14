class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        if(n<l) return -1;
        int maxsum=INT_MAX;
        for(int i=0;i<n;i++){
        int maxi = 0;
            for(int j=i;j<n;j++){
                maxi=maxi+nums[j];
                int length=j-i+1;
                if(length>=l && length <= r){
                    if(maxi>0){

                maxsum=min(maxsum,maxi);
                    }

                }
                if(length>r) break;
            }
        }
        if(maxsum==INT_MAX) return -1;
        return maxsum;
    }
};