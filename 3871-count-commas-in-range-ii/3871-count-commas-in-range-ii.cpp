class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        
        long long power = 1000; 
        long long commas = 1;

        while (power <= n) {
            long long nextPower = power * 1000;
            long long upper = min(n, nextPower - 1);

            ans += (upper - power + 1) * commas;
            power = nextPower;
            commas++;
        }

        return ans;
    }
};