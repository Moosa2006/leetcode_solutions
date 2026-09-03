class Solution {
public:
    void backtrack(vector<vector<int>>& ans, vector<int>& arr, int target, int index, vector<int>& ds){
        if(index == arr.size()){
            if(target == 0) ans.push_back(ds);
            return;
        }
        if(arr[index] <= target){
            ds.push_back(arr[index]);
            backtrack(ans, arr,target-arr[index], index, ds);
            ds.pop_back();
        }
        backtrack(ans,arr,target,index+1, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        backtrack(ans,candidates,target,0,ds);
        return ans;

    }
};