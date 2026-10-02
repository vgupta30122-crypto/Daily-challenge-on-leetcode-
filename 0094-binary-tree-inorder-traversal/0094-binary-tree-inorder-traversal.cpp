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
// class Solution {
// public:
//     // vector<int> inorderTraversal(TreeNode* root) {
        
//     // }
//     void inorder(TreeNode* root,vector<int> & ans){
//     if(root ==NULL) return ; // base case 
   
//     inorder (root->left,ans);// left 
//      ans.push_back(root->val) ; // root 
//      inorder (root->right,ans);// right
// }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         inorder(root,ans);
//         return ans;
 
        
//     }
// };
  // <<<<<<   m2 >>>>>>>>>>>

// class Solution {
// public:
    
//     vector<int> inorderTraversal(TreeNode* root){
//         vector<int> ans;
//         stack<TreeNode*>st;
//         TreeNode* node = root;
//         while(st.size()>0 || node){
//             if(node){
//                 st.push(node);
//                 node = node->left;
//             }
//             else{
//                 TreeNode* temp = st.top();
//                 st.pop();
//                 ans.push_back(temp->val);
//                 node = temp ->right;
//             }
//         }
//      return ans;

        
//     }
// };


// <<<<<<<<  m3   >>>>>>>>>>>>>>
class Solution {
public:
    
    vector<int> inorderTraversal(TreeNode*root){
         vector<int> ans;
         TreeNode* curr = root;
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
                else{ // pred right == curr ; unlink
                    pred ->right=NULL;
                    ans.push_back(curr->val);
                    curr= curr->right;
                }
            } 
            else{   // curr->left == null
                ans.push_back(curr->val);
                curr= curr->right;
            }
         }
         return ans;
         
    }
};





