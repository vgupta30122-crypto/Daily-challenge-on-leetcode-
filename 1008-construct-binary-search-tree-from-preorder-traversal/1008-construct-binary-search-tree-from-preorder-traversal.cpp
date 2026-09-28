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

    TreeNode* build (vector<int> & pre , int prelow, int prehigh,vector<int> & in , int inlow , int inhigh){
        if(prelow>prehigh) return NULL;
        TreeNode* root = new TreeNode(pre[prelow]);
        if(prelow == prehigh) return root;
        int i = inlow ;
        while(i<=inhigh){
            if(in[i]==pre[prelow]) break;
            i++;
        }
        int leftCount = i-inlow;
        int rightCount = inhigh-i;
        root ->left = build (pre, prelow+1, prelow+leftCount ,in , inlow , i-1);
        root->right =  build (pre, prelow+leftCount+1 ,prehigh, in ,i+1, inhigh);
        return root;

     }



    TreeNode* bstFromPreorder(vector<int>& pre) {
        vector<int> in =pre ; /// copy bn gai 
        sort(in.begin(), in.end());
        int n = pre.size();
        return build(pre,0,n-1,in,0,n-1);
    }
};