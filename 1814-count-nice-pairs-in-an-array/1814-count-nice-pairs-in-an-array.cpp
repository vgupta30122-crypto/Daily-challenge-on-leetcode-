class Solution {
public:
        int rev(int n ){
             int r=0;
          while(n>0){
              r*=10;
              r+=(n%10);
                n/=10;
        }
         return r;
        }
    int countNicePairs(vector<int>& nums) {
      int count =0;
      int n= nums.size();
      unordered_map<int , int > mp;
      for(int i=0;i<n;i++){
        nums[i]-= rev(nums[i]);
      }
      for(int i=0;i<n;i++){
        if(mp.find(nums[i])!=mp.end()){
            count = count%1000000007;
            count += mp[nums[i]];
            mp[nums[i]]++;
        }
        else mp[nums[i]]++;
      }
        return count%1000000007;
    }
};