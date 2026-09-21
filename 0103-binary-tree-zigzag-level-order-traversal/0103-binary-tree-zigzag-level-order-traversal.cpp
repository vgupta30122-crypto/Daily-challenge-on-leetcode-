
class Solution {
public:
      int levels(TreeNode* root){
    if(root ==NULL) return 0;
    return  1 + max(levels(root ->left),levels(root ->right));
}
void nthOrder(TreeNode* root ,int curr,int level,vector<int>& v) {
    if (root == NULL) return; // base case 
    if(curr == level){
    v.push_back(root->val); // root 
        return ;
      }
         nthOrder(root->left,curr+1,level,v); // left
         nthOrder(root->right ,curr+1,level,v);// right  
    // root 
// reversing the levels 
}
void nthLevelreverse(TreeNode*  root ,int curr,int level,vector<int>& v) {
    if (root == NULL) return; // base case 
    if(curr == level){
     v.push_back(root->val); // root 
        return ;
      }
         nthLevelreverse(root->right ,curr+1,level,v);// right 
         nthLevelreverse(root->left,curr+1,level,v); // left
      } // end function 

void lorder(TreeNode* root, vector<vector<int>>& ans ){
    int n = levels(root);
    //  vector<int> v;
    for(int i=1;i<=n;i++){
         vector<int> v;
        if(i%2!=0)  // odd level 
              nthOrder(root, 1 ,i,v);
        
            else 
                 nthLevelreverse(root, 1 ,i,v);
          ans.push_back(v);
          cout<<"\n";

    }
     }
   vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans ;
         lorder(root,ans);
         return ans ;
        
    }
};   