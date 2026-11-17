class Solution {
public:

     vector<int> dp;
     // recursion 
     int f(vector<int>& arr, int i ,int end) {
        // if (i == arr.size() - 1) return arr[i]; // Single house
        // if (i == arr.size() - 2)
        //     return max(arr[i], arr[i + 1]); // 2 houses
        if(i>end) return 0;

        return max(arr[i] + f(arr, i + 2 ,end),
                      f(arr, i + 1,end));
    }
     // memoization 
    int fd(vector<int>& arr, int i,int end) {
          if(i>end) return 0;
        // if (i == arr.size() - 1) return arr[i]; // Single house
        // if (i == arr.size() - 2)
            // return max(arr[i], arr[i + 1]); // 2 houses

        if (dp[i] != -1) return dp[i]; // Use stored result

        // If dp[i] was -1, compute its state for the first time
        return dp[i] = max(arr[i] + fd(arr, i + 2,end),
                            fd(arr, i + 1,end));
    }
      // tabulation 
    int fbu(vector<int>& arr,int start ,int end ) {
        int n = end - start + 1;
        if (n == 1) return arr[start];

        // dp.clear();
        // dp.resize(n);

        // // Base case
        // dp[n - 1] = arr[n - 1];
        // dp[n - 2] = max(arr[n - 1], arr[n - 2]);
        vector<int> dp(n + 2, 0);

        for (int i = n - 1; i >= 0; i--) { // Order
            dp[i] = max(arr[ start+i] + dp[i + 2],
                         dp[i + 1]);
        }

        return dp[0];
    }
    // robber 
    int rob(vector<int>& arr) {
        int n = arr.size();
        if(n==0) return 0;
        if(n==1) return arr[0];
        // case 1 
        int first = fbu(arr,0,n-2);
        // case 2 
        int second = fbu(arr, 1 , n-1);
        
        return max(first,second);
    }
};
//     int rob(vector<int>& arr) {
//           return fbu(arr); 
        
//     }
// };

//      vector<int> dp;
//      int f(vector<int>& arr, int i) {
//         if (i == arr.size() - 1) return arr[i]; // Single house
//         if (i == arr.size() - 2)
//             return max(arr[i], arr[i + 1]); // 2 houses

//         return max(arr[i] + f(arr, i + 2),
//                    0 + f(arr, i + 1));
//     }

//     int fd(vector<int>& arr, int i) {
//         if (i == arr.size() - 1) return arr[i]; // Single house
//         if (i == arr.size() - 2)
//             return max(arr[i], arr[i + 1]); // 2 houses

//         if (dp[i] != -1) return dp[i]; // Use stored result

//         // If dp[i] was -1, compute its state for the first time
//         return dp[i] = max(arr[i] + fd(arr, i + 2),
//                            0 + fd(arr, i + 1));
//     }

//     int fbu(vector<int>& arr) {
//         int n = arr.size();
//         if (n == 1) return arr[0];

//         dp.clear();
//         dp.resize(n);

//         // Base case
//         dp[n - 1] = arr[n - 1];
//         dp[n - 2] = max(arr[n - 1], arr[n - 2]);

//         for (int i = n - 3; i >= 0; i--) { // Order
//             dp[i] = max(arr[i] + dp[i + 2],
//                         0 + dp[i + 1]);
//         }

//         return dp[0];
//     }
//     int rob(vector<int>& arr) {
        
//         return fbu(arr);
//     }
// };