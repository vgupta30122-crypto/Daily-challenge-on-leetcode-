class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //    int v;
        // vector<int>& v;

        // int n= nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0) { 
        //     v.push_back(nums[i]);
        // }
        //      }
        //      while(v.size()<n){
        //         v.pop_back(0);

        //      }
        
        // }
        // return v ;
        int n= nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                // swap 
                swap( nums[i], nums[j]);
                 j++;
            }
         
        }
    }
    
};