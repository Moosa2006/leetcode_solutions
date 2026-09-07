class Solution {
public:
    void findSum(int start, int sum, int elements, int k, int n,vector<int>& curr,vector<vector<int>>& ans){
        if(sum == n && elements == k){

        ans.push_back(curr);
         return;
        } 
        if(sum > n || elements == k) return;
        

        for(int i=start; i<=9;i++){
            curr.push_back(i);
            findSum(i+1,sum+i,elements+1,k,n,curr,ans);
            curr.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> curr;
        int start =1;
        findSum(start,0,0,k,n,curr,ans);
        return ans;
    }
};