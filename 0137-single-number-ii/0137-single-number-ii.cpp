class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        for(int i=0;i<32;i++){
            int cnt = 0;
            for(int num:nums){
                if((num>>i) & 1){
                    cnt++;
                }
            }
        if(cnt%3!=0){
            result = result | (1<<i);
        }
        }
        return result;
    }
};