// class Solution {
// public:
//     bool isAnagram(string s, string t) {

//         //string s="anagram";
//         //string t="nagaram";
//     //getline(cin,s);
//     sort(s.begin(),s.end());
//     //cout<<s<<endl;
//       //string t;
//        //getline(cin,t);
//        sort(t.begin(),t.end());
    

//       if( s==t) return true;
//       else{
//        return false;
//       }
//     }
// };

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         // if(s.size()! = t.size()) return false;
//     unordered_map<char, int > mp1,mp2;
    
//     for(auto x :s) {
//         mp1[x]++;
//     }

//     for(auto x :t) {
//         mp2[x]++;
    
//     for(auto ele: mp1){
//         char key = ele.first;
//         int val = ele.second;
//         if(mp2.count(key)){
//             if(mp2[key]!=val) return true;
//         }
//         else  return false ;


//     }
//     return true;

       
//     }
// };


// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size() != t.size()) return false;
//     unordered_map<char, int > mp;
    
//     for(auto x :s) {
//         mp[x]++;
//     }

//     for(auto x :t) {
//         mp[x]--;
//     }
//      for(auto ele: mp){
//         if(ele.second >0) return false;
//      }
// return true;
       
//     }
// };

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
    unordered_map<char, int > map1;
    unordered_map<char, int > map2;
    for(int i=0;i<s.length();i++){
        map1[s[i]]++;
    }
     for(int i=0;i<t.length();i++){
        map2[t[i]]++;
    }
    for(auto x : map1){
        char ch1 = x.first;
        int freq = x.second;
        if(map2.find(ch1)!=map2.end()){
            int freq2 = map2[ch1];
            if(freq!= freq2) return false;
        }
        else return false;

    }
return true;
       
    }
};