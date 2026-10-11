class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int Squares = 0;
        for(int i=1;i<=nums.size();i++){
            if(nums.size() % i ==0){

            Squares += (nums[i-1]*nums[i-1]);
            }
        }
        return Squares;
    }
};