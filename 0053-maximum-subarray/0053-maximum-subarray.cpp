class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int maxsum=INT_MIN;
        int sum =0;
        for(int i=0;i<n;i++){
            // int sum =0;
            // if(nums[i]<nums[i+1]){
            //     sum+=nums[i];
            // }
            // for(int j=i;j<n;j++){
                  sum +=nums[i];
                maxsum=max(maxsum,sum);
                if(sum<=0) sum =0;


            // }

        }
         return maxsum;
    }
};