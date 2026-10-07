// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//       int n=nums.size();
//     //   int target =0;
//     //   int idx=-1;
//       for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//         if(nums[i]+nums[j]==target)  return {i,j};
//       } 

//     }
//     return {1,1};
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
      int n=nums.size();
      unordered_map<int , int > mp;
      for(int i=0;i<n;i++){
        int rem =  target - nums[i];
        if(mp.find(rem)!= mp.end()){
            ans.push_back(mp[rem]);
            ans.push_back(i);
        }
        else {
            mp[nums[i]] =i;
        }
      }
    return ans;
    }
};