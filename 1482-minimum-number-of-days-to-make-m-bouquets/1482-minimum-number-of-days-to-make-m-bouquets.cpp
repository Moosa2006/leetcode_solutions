class Solution {
public:
    bool possible(vector<int>& arr,int day, int m, int k){
        int n=arr.size();
        int cnt=0;
        int bouquet = 0;
        for(int i=0;i<n;i++){
            if(arr[i]<=day){
                cnt++;
                if(cnt==k){
                    bouquet++;
                    cnt=0;
                }
            }
            else{
                cnt=0;
            }
        }
        return bouquet>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
       long long total = 1LL * k * m; // Total flowers required

        // If total required flowers > available flowers, it's impossible
        if (total > bloomDay.size()) return -1;

        // Find minimum and maximum bloom days from array
        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());

        // Apply binary search on number of days
        int low = mini, high = maxi;
        int result = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (possible(bloomDay, mid, m, k)) {
                // If it's possible to make bouquets on this day, try to find an earlier day
                result = mid;
                high = mid - 1;
            } else {
                // Otherwise, try with a later day
                low = mid + 1;
            }
        }

        return result;
    }
};