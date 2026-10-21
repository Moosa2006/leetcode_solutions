class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n= cardPoints.size();
        
        int Lsum=0;
        int Rsum=0;
        int maxSum=0;
        
        for(int i=0;i<k;i++){
            Lsum += cardPoints[i];
        }
        maxSum = Lsum;
        int right = cardPoints.size()-1;

        for(int i=k-1;i>=0;i--){
            Lsum -= cardPoints[i];
            Rsum += cardPoints[right];
            right--;
            maxSum = max(maxSum,Lsum+Rsum);
        }
        
        
        
        
      
        return maxSum;
    }
};