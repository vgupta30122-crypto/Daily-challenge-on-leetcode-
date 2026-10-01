class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n= nums.size();
        vector<int> ls(n,0);
      vector<int> rs(n,0);
        
        for(int i=1;i<n;i++){
            ls[i]= ls[i-1]+nums[i-1];
        }

          for(int i=n-2;i>=0;i--){
            rs[i]= rs[i+1]+nums[i+1];
        }


        // 
        for(int i=0;i<n;i++){
            if(ls[i]==rs[i]){
                return i;
            }
            
        }
        return -1;

        
    }
};