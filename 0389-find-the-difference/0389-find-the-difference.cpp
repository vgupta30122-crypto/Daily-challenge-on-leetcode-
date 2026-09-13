class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans =0;
        int n = s.length();
        int m= t.length();
        for(char ch : s){
            ans = ans^=ch;
          
        }
        for(char ch :t){
             ans = ans^=ch;

            
        }
        return ans ;
    }
};