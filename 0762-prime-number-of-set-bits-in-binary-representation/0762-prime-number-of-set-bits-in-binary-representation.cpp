class Solution {
public:
    bool isprime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans =0;
        for(int i=left;i<=right;i++){
            int bits = __builtin_popcount(i);
            //Ye directly integer ke binary representation mein number of 1s count karta hai.
            if(isprime(bits))
            ans++;

        }
        return ans;
        
    }
};