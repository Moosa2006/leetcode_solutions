class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        int n = intervals.size();

        vector<int> start(n), end(n);

        for (int i = 0; i < n; i++) {
            start[i] = intervals[i][0];
            end[i] = intervals[i][1];
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());




        int arr = 0;
        int dep = 0;
        int curr= 0;
        int ans = 0;
        while(arr<n){
            if(start[arr] <= end[dep]){
                curr++;
                ans = max(ans,curr);
                arr++;
            } else{
                curr--;
                dep++;
            }
        }
        return ans;
    }
};