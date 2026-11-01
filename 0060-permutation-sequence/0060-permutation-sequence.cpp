class Solution {
public:

// void permutations (vector<string > & v,string ans ,string original){
    // if(original==""){
    //     v.push_back(ans);
    //     return ;
string helper (string  str ,int k,string ans ){
    int n =str.length();
    if(n==1){
        ans +=str;
        return ans;
    }
    int fact =1;
    for(int i=2; i<=n-1;i++){
        fact*=i;

    }
    int idx =k/fact;
    if(k%fact==0) idx--;
    char ch=str[idx];
    string left =str.substr(0,idx);
      string right =str.substr(idx+1);
     int q=1;
     if(k%fact==0) q =fact;
     else q=k%fact;
     return helper(left+right ,q,ans+ch);
    
}


    string getPermutation(int n, int k) {
      // 1 2 3 
      // { "123", 132 , 231 321 321  }
      string str ="";
      for(int i=1;i<=n;i++){
        str+=to_string(i);
      }  
      vector <string > v;
      return helper(str,k,"");
    
    }
};