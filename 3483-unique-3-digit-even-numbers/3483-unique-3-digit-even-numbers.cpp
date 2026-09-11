class Solution {
public:
    int totalNumbers(vector<int>& nums) {
         set <int> st ;
        int n= nums.size();
       
        // int len =0;
        int i=0;
        int j=0;
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j|| j==k||k==i){
                        continue;

                    }
                    if(nums[i]==0){
                        continue;
                    }
                    
                    if(nums[k]%2!=0){
                        continue;
                    }
                     int ans = nums[i] * 100+ nums[j] * 10 + nums[k];
                     st.insert(ans);
                            
                }
            }
            
        }
            return st.size();
        }
      
        
    
};

// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         int n= nums.size();
//         vector<int> v;
//         // int len =0;
//         int j=0;
//         for(int i=0;i<n;i++){
//            int  len =0;
        
//         // len ++;
//         while(nums[j]>0){

//             nums[j]=nums[j]/10;
//               len ++;
//          }
//           j++;
//          v.push_back(len);
//         }

//          int count =0;
//          for(int i=0;i<n;i++){
//             if(v[i]%2==0){

            
//             count++;
//             }

//          }
//            return count;

        
        
//     }
// };