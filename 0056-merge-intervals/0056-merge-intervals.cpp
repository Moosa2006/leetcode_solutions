class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> sol;

        vector<int> current = intervals[0];

        int n = intervals.size();

        for (int i = 1; i < n; i++) {

            if (intervals[i][0] <= current[1]) {
                current[1] = max(current[1], intervals[i][1]);

            } else {
                sol.push_back(current);
                current = intervals[i];
            }
        }
        sol.push_back(current);
        return sol;
    }
};