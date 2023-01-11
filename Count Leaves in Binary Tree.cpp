 void inorder(Node* root,int &cnt)
{
    if(root==NULL)
    return;
    inorder(root->left,cnt);
    if(root->left==NULL && root->right==NULL)
    {
        cnt++;
    }
    inorder(root->right,cnt);

}
    int countLeaves(Node* root) {
        int cnt=0;
        inorder(root,cnt);
        return cnt;

    }
