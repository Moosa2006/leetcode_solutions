class Solution {
public:
    bool isValid(vector<int>& nums, int divisor, int threshold){
        int sum=0;
        for(int num:nums){
            sum += (num+divisor-1)/divisor;
        }
        return sum <= threshold;
    }



    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int low=1,high=maxi;
        int result=-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isValid(nums,mid,threshold)){
                result=mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;
    }
};