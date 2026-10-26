class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlen = 0;
        int left = 0;
        int zerocount = 0;
        for (int i = 0; i < n; i++) {

            if (nums[i] == 0) {
                zerocount++;
            }

            while (zerocount > k) {

                if (nums[left] == 0) {
                    zerocount--;
                }

                left++;
            }

            maxlen = max(maxlen, i - left + 1);
        }
        return maxlen;
    }
};