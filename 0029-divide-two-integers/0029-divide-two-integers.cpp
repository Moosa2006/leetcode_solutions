class Solution {
public:
    int divide(int dividend, int divisor) {
        bool negative = (dividend < 0) ^ (divisor < 0);
        long long dividendAbs = llabs((long long)dividend);
        long long divisorAbs = llabs((long long)divisor);
        long long quotient = 0;



        for(int shift = 31;shift >= 0;shift--){
            long long chunk = divisorAbs << shift;
            if(chunk <= dividendAbs){
                dividendAbs -= chunk;

                quotient += (1LL << shift);
            }
        }

        long long res = negative ? -quotient:quotient;
        if(res > INT_MAX){
            return INT_MAX;
        }
        if(res < INT_MIN){
            return INT_MIN;
        }
        return int(res);
    }
};