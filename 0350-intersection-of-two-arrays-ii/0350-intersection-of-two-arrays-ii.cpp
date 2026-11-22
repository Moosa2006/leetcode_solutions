class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        unordered_map<int,int> cnt;
        for(int num:nums1){
            cnt[num]++;
        }
        for(int num:nums2){
            if(cnt[num] > 0){
                ans.push_back(num);
                cnt[num]--;
            }
        }
        return ans;
    }
};