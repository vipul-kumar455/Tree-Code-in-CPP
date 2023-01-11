class Solution {
public:
int height(TreeNode* root)
{
    if(root==NULL)
    return 0;
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        return 1;
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool diff=abs(height(root->left)-height(root->right))<=1;
        if(left && right && diff)
        return 1;
        return 0;
    }
};
