/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
        return NULL;
        //TreeNode* n1=root->val;
        if(root==p || root==q)
        return root;
        TreeNode* leftans=lowestCommonAncestor(root->left,p,q);
                TreeNode* righttans=lowestCommonAncestor(root->right,p,q);
                if(leftans==NULL)
                return righttans;
                if(righttans==NULL)
                return leftans;
                return root;
                



    }
};
