/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
         int low =1;
         int high =n;
        //  int result =0;
        //  int mid =0;
         while(low<=high){
            int mid = low +(high -low)/2;
            // if(guessNumber == )
             int result = guess(mid);
            // return mid;

         
         if (result == 0){
             return mid;

         }
            // int result <guess(mid);{
            else if (result ==-1){
                high = mid -1;

            }
           

         
         else {
            low = mid +1;
         }
          }
         return -1;
        
    }
};