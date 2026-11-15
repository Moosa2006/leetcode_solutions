class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        vector<vector<int>> sub;
        const int MOD = 1e9 + 7;
        long long odd=0,even=0;
        long long ans=0;
        for(int x:arr){
            if(x%2==0){
                even++;
            }
            else{
                long long temp=odd;
                odd=even+1;
                even=temp;
            }
            ans=(ans+odd)%MOD;
        }
        // int c=0;
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
                
        //         sum = sum+arr[j];
        //     if(sum % 2 != 0){
        //         c++;
        //     }
        //     }

        // }
        return ans;
    }
};