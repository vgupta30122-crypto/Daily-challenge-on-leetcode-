// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//        int n= nums.size();
//        vector<int> pre(n);
//         vector<int> suf(n);
//         //  vector<int> ans(n);

//          // prefix product array
//          int p=nums[0];
//          pre[0]=1;
//          for(int i=1;i<n;i++){
//             pre[i] = p;
//             p*=nums[i];
//          }
//          // suffix product array
//          p=nums[n-1];
//          suf[n-1]=1;
//          for(int i=n-2;i>=0;i--){
//             suf[i] = p;
//             p*=nums[i];
//          }
//          // pre [i]*=suf[i] 
//          for(int i=0;i<n;i++){
//             pre[i] =pre[i]*suf[i];
//          }
//          return pre ;
//          // without ans vector ke  bhi ho sakta hai
//         //  method 2 hai 
//         // and only one vector se bhi ho skta hai 
         

    



    

//     }
// };

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n= nums.size();
       vector<int> v;
    //     vector<int> suf(n);
  int   p=1;
   int  flag = 0;
    for(int i=0;i<n;i++){
        if(nums[i]==0) {
              flag ++;
            continue;
        }
        p*=nums[i];  
    }
        for(int i=0;i<n;i++){
            if(nums[i] == 0) {
                  if(flag ==1){
                    v.push_back(p);
                  }
                  else{
                    v.push_back(0);
                  }
                continue;
            }
    
           int d=p/nums[i];
           if(flag){
            v.push_back(0);
           }else v.push_back(d);
        } 
        return v;

    }
};