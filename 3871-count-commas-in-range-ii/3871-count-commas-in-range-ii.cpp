class Solution {
public:
    long long countCommas(long long n) {
    //          long long count =0;;
    //     for(long long i=1000;i<=n;i++){
    //         long long x =i;
    //         while(x>=1000){
    //             count ++;
    //             x = x/1000;
    //         }
           
    //         //  count =count+ to_string(i).length()/ 4;
    //          //ye integer i ko string mein convert karta hai.
    //     }
    //     return count;
        
    
        
    // }

    long ans = 0;
        if(n>=1000){
            ans += n-999;
        }
        if(n>=1000000){
            long count = n-999999;
            ans += count;
        }
        if(n>=1000000000){
            long count = n-999999999;
            ans += count;
        }
        if(n>=1000000000000L){
            long count = n-999999999999L;
            ans += count;
        }
        if(n >= 1000000000000000L) {
            long count = n - 999999999999999L;
            ans += count;
        }
        return ans;
    }
};