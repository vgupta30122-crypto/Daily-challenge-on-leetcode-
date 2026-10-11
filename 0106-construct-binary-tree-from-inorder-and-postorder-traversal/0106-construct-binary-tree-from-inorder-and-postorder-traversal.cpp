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
    TreeNode* build(vector<int>& post, int postlow, int posthigh,
                    vector<int>& in, int inlow, int inhigh) {
            if (postlow > posthigh || inlow > inhigh)
            return NULL;
        TreeNode* root = new TreeNode(post[posthigh]);

        int i = inlow;
        while (i <= inhigh) {
            if (in[i] == post[posthigh])
                break;
            i++;
        }

        int leftCount = i - inlow;
        root->right = build(post,
                            postlow + leftCount,
                            posthigh - 1,
                            in, i + 1, inhigh);
        root->left = build(post,
                           postlow,
                           postlow + leftCount - 1,
                           in, inlow, i - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();

        return build(postorder, 0, n - 1,
                     inorder, 0, n - 1);
    }
};
// preorder and post order 

