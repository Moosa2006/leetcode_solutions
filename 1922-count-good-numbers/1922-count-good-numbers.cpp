class Solution {
public:
    long long power(long long base, long long exp){
        long long MOD = 1e9 + 7;
        long long result = 1;
        while(exp > 0){
            if(exp % 2 ==1){
                result = (result * base) % MOD;
                exp--;
            }
            base = (base*base) % MOD;
            exp /= 2;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        long long MOD = 1e9 + 7;
        long long odd = n/2;
        long long even = (n+1)/2;

        long long even_combos = power(5, even);
        long long odd_combos = power(4, odd);
    //     if(n==0) return 1;
    //     if(n%2==0)
    //      return (4LL * countGoodNumbers(n-1)) % MOD;
    //     else
    //         return (5LL *countGoodNumbers(n-1)) % MOD;
    // }
    return (even_combos * odd_combos) % MOD;}
};