// class Solution {
// public:
//    int fib (int n){
//     if(n==0) return 0;
//     if(n==1 || n==2) return 1;
//        int leftans= fib(n-1);
//        int rightans=  fib(n-2);
//     return leftans + rightans;
//    }
// };
  // same method hai 
// class Solution {
// public:
//    int fib (int n){
//     if(n<=1) return n;
//     return fib(n-1)+fib(n-2);
//    }
// };
 // dp and memuaization 

// class Solution {
// public:
//    int fibo(int n , vector<int> & dp){
//      if(n<=1) return n;
//      if(dp[n]!=-1) return dp[n];
//      return dp[n]= fibo(n-1,dp) +fibo(n-2,dp);
//    }
//    int fib (int n){
//    vector<int> dp(n+1,-1);
//    return fibo(n,dp);
//    }
// };

class Solution {
public:
   int fib (int n){
      if(n<=1) return n;
      int dp[n+1];
      dp[0]=0;
      dp[1]=1;
      for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
      }
   return dp[n];
   }
};