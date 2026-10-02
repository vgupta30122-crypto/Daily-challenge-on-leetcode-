class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n= nums.size();
        vector<int> v;
        int fmx= INT_MIN;
        int smx= INT_MIN;
        int tmx= INT_MIN;
        for(int i=0;i<n;i++){
                fmx=max(fmx,nums[i]);
        }
        bool flag1 = false;
        for(int i=0;i<n;i++){
            if(nums[i]==fmx) continue;
            if(!flag1 || nums[i]>smx){
                smx = nums[i];
                flag1=true;
            }
        }
        if(!flag1) return fmx;

        bool flag2 = false;
        for(int i=0;i<n;i++){
            if(nums[i]== fmx || nums[i]==smx) continue;
            if(!flag2 || nums[i]>tmx){
                tmx=nums[i];
                flag2 = true;
            }
        }
        if(!flag2) return fmx;
        return tmx;
    }
};