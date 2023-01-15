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
 bool solve3(TreeNode* root1,TreeNode* root2)
    {if(root1==NULL && root2==NULL)
        return 1;
        if(root1==NULL || root2==NULL)
        return 0;
        
        return (root1->val ==root2->val) && solve3(root1->left,root2->right) &&solve3(root1->right, root2->left);
    }
    bool isSymmetric(TreeNode* root) {
       return solve3(root,root); 
    }
};
