class Solution {
public:
    int MOD = 1e9 + 7;
    long long helper(long long index, long long n){
        if(index == n) return 1;
        long long result = 0;
        if(index%2==0){
            for(int digit:{0,2,4,6,8}){
                result = (result + helper(index+1,n))%MOD;
            }
        } else{
            for(int digit:{2,3,5,7}){
                result = (result+helper(index+1,n)) % MOD;
            }
        }
        return result;
    }
    long long power(long long base, long long exp){
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

        return (even_combos * odd_combos) % MOD;
    //     if(n==0) return 1;
    //     if(n%2==0)
    //      return (4LL * countGoodNumbers(n-1)) % MOD;
    //     else
    //         return (5LL *countGoodNumbers(n-1)) % MOD;
    // }
    // return helper(0,n); 
    }
};