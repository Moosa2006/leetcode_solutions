class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = INT_MAX;
        int maxi = 0;
        for(int price : prices){
            if(price < min){
                min = price;
            }
            else{
                maxi = max(maxi,price-min);
            }
            
            



        }
        
        return maxi;
    }
};