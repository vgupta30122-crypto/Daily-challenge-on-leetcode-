class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // vector<int> ans;
        int mx= INT_MIN;
        int n= nums.size();
        for(int i=0;i<n;i++){
            mx= max(mx,nums[i]);
           

        }
        for(int i=0;i<n;i++){
           if(mx==nums[i]) return i;
        }

        return -1;
        

    }
};