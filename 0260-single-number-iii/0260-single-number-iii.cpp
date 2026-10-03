class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorResult = 0;
        for(int num:nums){
            xorResult ^= num;
        }
        uint32_t bits = static_cast<uint32_t>(xorResult);
        uint32_t mask = bits & (~bits + 1u);
        int grp1 = 0;
        int grp2 = 0;

        for(int num:nums){
            if((static_cast<uint32_t>(num) & mask)!=0){
                grp1^=num;
            } else{
                grp2 ^= num;
            }
        }

        return {grp1,grp2};
    }
};