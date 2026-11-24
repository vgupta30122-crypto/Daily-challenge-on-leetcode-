class Solution {
public:
    int maxLength(vector<int>& nums) {
         int ans=0;
          for(int i=0;i<nums.size();i++){
            long long x=1 ,G=0,L=1;
               for(int j=i;j<nums.size();j++) {
                if(x>LLONG_MAX/nums[j]) break;
                x*=nums[j];
                G=gcd(G,nums[j]);
                L=lcm(L,nums[j]);
                if(x==G*L){
                    ans=max(ans,j-i+1);
                }
          }
          }
          return ans;
    }
};