class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if( original.size() != m * n)
        return {};
          
          vector<vector<int>> ans (m, vector<int>  (n));
          int i=0;
          int j=0;
          int k=0;
          for(int i=0;i<m;i++){   /// m is row and n is colom hai 
            for(j=0;j<n;j++){
                  ans [i][j]= original[k];
                k++;
            }
          } 
          return ans;

        

    }
};