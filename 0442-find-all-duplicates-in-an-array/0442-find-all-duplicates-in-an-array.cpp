class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        int n =nums.size();
        for(int i=0;i<n;i++){
            int x = abs(nums[i]);
            int index = x-1;

            if(nums[index]<0){
             v.push_back(x);
            }
            else {
                nums[index]= - nums[index];
            }
        }
        return v ;

        
    }
};