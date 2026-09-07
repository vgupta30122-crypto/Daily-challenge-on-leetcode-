// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // bool flag = true;
        // if(i==j){
        //     return true;
        // }
        // else return false;
        int low=1;
        int high=n;
        while(low<high){
            // binery search
            int mid = low+(high-low)/2;
        if(isBadVersion(mid)){
            high =mid;

        }
        else{
            low =mid+1;
        }

        
    }
    return low;
    }
};