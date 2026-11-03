class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=0;
      int j=1;
      int ans =0;
      int n=nums.size();
      if(n==0)
      return 0;
    //   for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j]){
                    i++;
                    nums[i]=nums[j];
                    // ans =i+1;

            }
            ans =i+1;
            
        }
        if(n==1) ans =1;
        return ans ;
       
    }
};