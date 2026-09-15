// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& arr, int k) {
//         int n=  arr.size();
//         int ngi[n];
//         stack<int> st;
//         ngi[n-1] = n;
//         st.push(n-1);
//         for(int i=n-2;i>=0;i--){
//             while(st.size()>0 && arr[st.top()]<=arr[i]){
//                 st.pop();

//             }
//             if(st.size()==0) ngi[i]=n;
//             else ngi[i]= st.top();
//             st.push(i);
//         }
//         vector<int> ans;
//         for(int i=0;i<n-k+1;i++){
//             int mx = arr[i];
//             int j=i;
//             while(j<i+k){
//                 mx = arr[j];
//                 j=ngi[j];
//             }
//             ans.push_back(mx);
//         }
        
//         return ans; 
        
//     }
// };
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if (k==1) return nums;
        int n= nums.size();
        deque<int> dq;
        vector<int> v;
        // int n= nums.size();
        for(int i=0;i<n;i++){
            while(dq.size()>0 && nums[i]>nums[dq.back()])
             dq.pop_back();
            dq.push_back(i);
            int j=i-k+1; // start of the window 
            while(dq.front()<j) dq.pop_front();
            if(i>=k-1) v.push_back ( nums[dq.front()]);

        }
        return v ;

        
    }
};