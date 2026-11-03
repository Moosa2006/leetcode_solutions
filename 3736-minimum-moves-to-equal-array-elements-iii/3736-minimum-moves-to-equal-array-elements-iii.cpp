class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxi = nums[n-1];
        int moves = 0;
        for(int i=0;i<nums.size();i++){
            while(nums[i] < maxi ){
                moves++;
                nums[i]++;
            }
        }
        return moves;
    }
};