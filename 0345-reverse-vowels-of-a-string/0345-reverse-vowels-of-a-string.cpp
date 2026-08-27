class Solution {
public:
    bool ansVowel(char c){
        return c=='a' || c=='e'|| c=='i'|| c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' ||
               c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
        // now apply two pointer approach 
        int i=0;
        int j=s.size()-1;
    //     if(s[i]!='a','e','i','o','u','A','E','I','O','U'){
    //          i++;

    //     }if(s[j]!='a','e','i','o','u','A','E','I','O','U'){
    //         j--;
    //     }
    //     if(s[i]=s[j]='a','e','i','o','u','A','E','I','O','U'){
    //         // swap 
    //         swap(s[i], s[j]);
    //     }
    //     i++;
    //     j--;
       //}
       while(i<j){
        // move left pointer 
        while(i<j && !ansVowel(s[i])){
            i++;
        }
        // move right pointer
         while(i<j && !ansVowel(s[j])){
            j--;
        }
        /// if both are vowel then swap 
        swap(s[i],s[j]);
        i++;
        j--;

       }
       return s;
    }
};