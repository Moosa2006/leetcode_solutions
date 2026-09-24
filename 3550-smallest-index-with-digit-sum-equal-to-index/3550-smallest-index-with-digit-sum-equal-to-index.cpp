class Solution {
public:
    int singledigit(int num){
        int sum = 0;
        while(num>0){
            sum = sum+num%10;
            num /=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(singledigit(nums[i]) == i){
                return i;
            }
        }
        return -1;
    }
};