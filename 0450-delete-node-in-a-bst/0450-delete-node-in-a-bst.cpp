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
     TreeNode* iop(TreeNode*  root){
        TreeNode*  pred = root->left;
        while(pred->right){
            pred = pred->right;
        }
        return pred ;
     }  
      TreeNode* ios(TreeNode*  root){
        TreeNode*  sus = root->right;
        while(sus->left!= NULL){
          sus = sus->left;
        }
        return sus ;
     } 
     

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root ==NULL) return NULL;
        if(root->val == key) {
            // case 1 no child 
            if(root->left ==NULL && root->right==NULL) return NULL;
            // Case 2 1 child 
            if(root->left ==NULL || root->right==NULL) {
                if(root->left!= NULL) return root->left;
                else return root->right;
            } 
            // case 3 child 2 
            if(root->left!=NULL && root->right!=NULL){
                // replac e the root with its inprder pred / suc 
                // after replacing delete the pred / sus 
                TreeNode* pred = iop(root);
                root->val = pred ->val;
                root->left = deleteNode(root->left, pred ->val);


            }
        }

        else if(root->val>key){
            // go left
            root->left = deleteNode(root->left,key);
        }
        else{
            //  go right
            root->right = deleteNode(root->right,key);
        }
        return root;
    }
};