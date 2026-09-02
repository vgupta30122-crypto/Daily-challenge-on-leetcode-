class Solution {
public:
    bool isPowerOfFour(int n) {
             if (n <= 0)
            return false;

        // return (n & (n - 1)) == 0;
        while(n%4==0){
            n=n/4;
            // n==1;

        }
        return n==1;
        
    }
};