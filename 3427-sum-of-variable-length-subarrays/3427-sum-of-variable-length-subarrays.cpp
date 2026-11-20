class Solution {
public:
    int subarraySum(vector<int>& nums) {
        // vector<int> v;
        //  int sum =0;
        int n = nums.size();
    //    for(int i=0;i<n;i++){
        //    v.push_back(sum);
        int sum =0;

          for(int i=0;i<n;i++){
            int start = max(0,i-nums[i]);
            for(int j=start;j<=i;j++){
                sum = nums[j]+sum;
            }
          }
       
       return sum;

    }
};