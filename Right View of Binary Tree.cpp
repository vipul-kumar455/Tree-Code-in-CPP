class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    
     void left(Node* root,vector<int>&ans,int lvl)
 {
     if(root==NULL)
     return;
     if(lvl==ans.size())
     ans.push_back(root->data);
     left(root->right,ans,lvl+1);
          left(root->left,ans,lvl+1);

     
 }

//Function to return a list containing elements of left view of the binary tree.
vector<int> rightView(Node *root)
{
    vector<int>v;
    
    left(root,v,0);
    return v;
   // Your code here
}
};
