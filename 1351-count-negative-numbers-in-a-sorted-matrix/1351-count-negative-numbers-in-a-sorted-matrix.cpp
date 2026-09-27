class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        vector<vector<int>> ans;
        int n = grid.size();
        int count =0;

        for(int i=0;i<n;i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
            // return count;
        }
        return count;
        
    }
};