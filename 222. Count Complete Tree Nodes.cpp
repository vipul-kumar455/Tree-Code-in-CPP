class Solution {
public:
void inorder(TreeNode* root,int &cnt)
{
    if(root==NULL)
    return;
    inorder(root->left,cnt);
    if(root!=NULL)
    {
        cnt++;
    }
    inorder(root->right,cnt);

}
    int countNodes(TreeNode* root) {
        int cnt=0;
        inorder(root,cnt);
        return cnt;

    }
};
