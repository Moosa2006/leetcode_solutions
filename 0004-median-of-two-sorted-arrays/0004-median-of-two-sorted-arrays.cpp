class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> res=nums1;
        res.reserve(nums1.size()+nums2.size());
        res.insert(res.end(),nums2.begin(),nums2.end());
        sort(res.begin(),res.end());
        if ((n1+n2)%2 !=  0){
            return res[(n1+n2)/2];
        }
        else{
            return double(res[((n1+n2)/2)] + res[((n1+n2)-1)/2])/2;
        }

    return -1;
    }
};