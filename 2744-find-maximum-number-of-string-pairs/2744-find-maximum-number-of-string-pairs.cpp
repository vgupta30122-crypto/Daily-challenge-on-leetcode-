class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& nums) {
        int count =0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            string rev = nums[i];
            reverse (rev.begin(),rev.end());
            for(int j=i+1;j<n;j++){
                 if(rev== nums[j]) count++;
            }
        }
        return count;
    }
};