// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n= nums.size();
//         sort(nums.begin(),nums.end());
//         for( int i=1;i<n;i++){
//             if(nums[i]== nums[i-1]){

//          return true;

//         }
//         }
       

        
//     return false ;
//     }
    
// };

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         // set<int> st;
//         int n1= nums.size();
//         unordered_set<int> s;
//        for(auto ele :s){
//         s.insert(ele);


//     }
//     vector<int> v;
//     // int n2 = nums.size();
//     for(auto it : s) {
//         v.push_back(it);
//     }
//     int n2 = v.size();
//     if(n1==n2){
//         return false ;
//     }
//     else return true;


//     }
    
// };


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // set<int> st;
        int n= nums.size();
        unordered_set<int> st;

        for(int i=0;i<n;i++){
            if(st.find(nums[i])!= st.end()) return true;
            
            st.insert(nums[i]);
        }
    //    for(auto ele :s){
    //     s.insert(ele);


    // }
    // vector<int> v;
    // // int n2 = nums.size();
    // for(auto it : s) {
    //     v.push_back(it);
    // }
    // int n2 = v.size();
    // if(n1==n2){
    //     return false ;
    // }
      return false;


    }



    
};