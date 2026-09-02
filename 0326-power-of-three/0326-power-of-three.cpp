class Solution {
public:
    bool isPowerOfThree(int n) {
           if (n <= 0)
            return false;

        // return (n & (n - 1)) == 0;
        while(n%3==0){
            n=n/3;
            // n==1;

        }
        return n==1;
        
    }
};