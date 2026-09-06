class Solution {
public:
    void findSum(int index, vector<int>& currentSum,vector<vector<int>>& ans,vector<int>&nums){

        ans.push_back(currentSum);
        
        for(int i=index;i<nums.size();i++){

            if(i > index && nums[i] == nums[i-1]){
                continue;
            }
            currentSum.push_back(nums[i]);
            findSum(i+1,currentSum,ans,nums);
            currentSum.pop_back();
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(nums.begin(),nums.end());
        findSum(0,curr,ans,nums);
        return ans;
    }
};