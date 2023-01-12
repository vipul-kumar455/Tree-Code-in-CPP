
class Solution {
public:
void left(Node* root,vector<int>&ans)
{
    if((root==NULL) ||(root->left==NULL && root->right==NULL))
    return;
   
    ans.push_back(root->data);
    if(root->left)
    left(root->left,ans);
    else
    left(root->right,ans);
     
    
}
void leaf(Node* root,vector<int>&ans)
{
    if(root==NULL)
    return;
    if(root->left==NULL && root->right==NULL)
    {
    ans.push_back(root->data);
    return;
    }
    leaf(root->left,ans);
    leaf(root->right,ans);
    
}
void right(Node* root,vector<int>&ans)
{
     
   if((root==NULL) ||(root->left==NULL && root->right==NULL))
    return;
    if(root->right)
    right(root->right,ans);
    else
    right(root->left,ans);
    ans.push_back(root->data);
     
    
}
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>v;
        if(root==NULL)
        return v;
        v.push_back(root->data);
        
        left(root->left,v);
        leaf(root->left,v);
        leaf(root->right,v);
        right(root->right,v);
        return v;
    }
};
