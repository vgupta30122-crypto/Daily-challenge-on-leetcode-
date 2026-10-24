class Solution {
public:
   int fib (int n){
    if(n==0) return 0;
    if(n==1 || n==2) return 1;
       int leftans= fib(n-1);
       int rightans=  fib(n-2);
    return leftans + rightans;
   }
    //    fibo(n);
};