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
    int minDiffInBST(TreeNode* root) {


        //    vector<int> inorderTraversal(TreeNode*root){
        //  vector<int> ans;
         TreeNode* curr = root;
           int prev = -1;
        int ans = INT_MAX;
         while(curr!=NULL){
            if(curr->left!=NULL) { // find the pred
                TreeNode* pred = curr ->left;
                while(pred->right!=NULL && pred->right!=curr){
                    pred = pred->right;
                }
                if(pred ->right==NULL){ // link 
                    pred->right= curr;
                    curr= curr->left;
                }
                else{ // 
                pred->right = NULL;  //unlink
                    // pred ->right=NULL;
                    // ans.push_back(curr->val);
                    if(prev!= -1){
                        ans = min(ans,curr->val - prev);
                    }
                    prev= curr->val;
                      curr= curr->right; 
                }
            } 
            else{ 
                if(prev!=-1){
                    ans = min(ans,curr->val - prev);
                }  
                prev= curr->val;
                curr= curr->right;
                
            }
         }
         return ans;
        
    }
};

//    vector<int> inorderTraversal(TreeNode*root){
//          vector<int> ans;
//          TreeNode* curr = root;
//          while(curr!=NULL){
//             if(curr->left!=NULL) { // find the pred
//                 TreeNode* pred = curr ->left;
//                 while(pred->right!=NULL && pred->right!=curr){
//                     pred = pred->right;
//                 }
//                 if(pred ->right==NULL){ // link 
//                     pred->right= curr;
//                     curr= curr->left;
//                 }
//                 else{ // pred right == curr ; unlink
//                     pred ->right=NULL;
//                     ans.push_back(curr->val);
//                     curr= curr->right;
//                 }
//             } 
//             else{   // curr->left == null
//                 ans.push_back(curr->val);
//                 curr= curr->right;
//             }
//          }
//          return ans;
         
//     }