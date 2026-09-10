class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n= nums.size();
        vector<int> v;
        // int len =0;
        int j=0;
        for(int i=0;i<n;i++){
           int  len =0;
        
        // len ++;
        while(nums[j]>0){

            nums[j]=nums[j]/10;
              len ++;
         }
          j++;
         v.push_back(len);
        }

         int count =0;
         for(int i=0;i<n;i++){
            if(v[i]%2==0){

            
            count++;
            }

         }
           return count;

        
        
    }
};