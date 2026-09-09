class Solution {
public:
    int countCommas(int n) {
        int count =0;;
        for(int i=1000;i<=n;i++){
           
             count =count+ (to_string(i).length()-1) / 3;
             //ye integer i ko string mein convert karta hai.
        }
        return count;
        
    }
};