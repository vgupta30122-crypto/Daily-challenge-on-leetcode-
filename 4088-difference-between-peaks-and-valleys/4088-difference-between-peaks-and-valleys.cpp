class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        // vector<int> v;
        int peak =0;
        // int nums[i]=0;
        int vally=0;
        int n = nums.size();
        for(int i=1;i<n-1;i++){
            if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1]){
                  peak += nums[i]; 
            }
        
            // peak += nums[i];
        
         else if 
            (nums[i] < nums[i - 1] && nums[i] < nums[i + 1]){
            
             vally += nums[i];
            }

        }  
        
       // return nums[i];
       return peak-vally;
        
    }
};