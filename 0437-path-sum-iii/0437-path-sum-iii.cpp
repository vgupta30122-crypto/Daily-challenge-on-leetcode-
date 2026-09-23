/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      void helper (TreeNode* root , long long  sum , int&  count ){
    if(root ==NULL) return ;
      
       if(root ->val == sum){
       count ++;
       
    }
  
    helper(root ->left,sum-(root->val),count );
     helper(root ->right,sum-(root->val),count );

}
    //  vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    //      vector<vector<int>>  ans;
    //      vector<int> s;
    //    helper(root,s,ans,targetSum);
    //  return ans;
    // }
    int pathSum(TreeNode* root, int targetSum) {
         // to add the sum of every node 
         if(root ==NULL) return 0;
         int count =0;
          helper(root , targetSum , count );
         count+= (pathSum(root->left,targetSum ) + pathSum(root ->right ,targetSum) );
         return count;

        
    }
};