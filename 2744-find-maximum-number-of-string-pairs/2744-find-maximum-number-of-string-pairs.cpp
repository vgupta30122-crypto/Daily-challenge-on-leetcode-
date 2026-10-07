// class Solution {

  // m 1 using for loop 
// public:
//     int maximumNumberOfStringPairs(vector<string>& nums) {
//         int count =0;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             string rev = nums[i];
//             reverse (rev.begin(),rev.end());
//             for(int j=i+1;j<n;j++){
//                  if(rev== nums[j]) count++;
//             }
//         }
//         return count;
//     }
// };

 // m2 using set 

// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& nums) {
//         int count =0;
//         int n = nums.size();
//         unordered_set<string> st;
//         for(int i=0;i<n;i++){
//             st.insert(nums[i]);
//         }
//         for(int i=0;i<n;i++){
//             string rev = nums[i];
//              reverse (rev.begin(),rev.end());
//              if(nums[i]==rev ) continue;
//              if(st.find(rev)!=st.end()){
//                 count ++;
//                 st.erase(nums[i]);
//              }

//         }

       
//         return count;
//     }
// };

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& nums) {
        int count =0;
        int n = nums.size();
        unordered_set<string> s;
        for(int i=0;i<n;i++){
            string rev = nums[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev)!=s.end()) count ++;
            else s.insert(nums[i]);

        }
        return count;
        
        }
};
