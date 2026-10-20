class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
 typedef pair<int,int> pi;
        unordered_map<int,int> mp;
        for(int x :nums){
            mp[x]++;
        }
          priority_queue<pi,vector<pi>,greater<pi> > pq;
                 for(auto x : mp){
        int ele = x.first, freq = x.second;
        pair<int,int> p = {freq,-ele};
        pq.push(p);
    }
        vector<int> ans;
          while(pq.size()>0){
            int freq= pq.top().first;
        int ele= -pq.top().second;
       

        pq.pop();
        for(int i=0;i<freq;i++){
            ans.push_back(ele);
        }
       }
       return ans ;
    }

};




// class Solution {
// public:
//        typedef pair<int,int> pi;
//     vector<int> topKFrequent(vector<int>& arr, int k) {
//        unordered_map<int,int> mp;
//        for(int ele : arr){
//         mp[ele]++;
//        }
//        // heap pair is <freq>  
//        priority_queue<pi,vector<pi>,greater<pi> > pq;
//        for(auto x : mp){
//         int ele = x.first, freq = x.second;
//         pair<int,int> p = {freq,ele};
//         pq.push(p);
//         // pq.piush({x.second, x.first})
//         if(pq.size()>k) pq.pop(); 
//        }
//        vector<int> ans;
//        while(pq.size()>0){
//         int ele= pq.top().second;
//         ans.push_back(ele);
//         pq.pop();
//        }
//        return ans ;
//     }

// };