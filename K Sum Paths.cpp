
class Solution{
  public:
  void solve(Node *root,int &count,int k,vector<int>v)
  {
      if(root==NULL)
      return;
      int sum=0;
      v.push_back(root->data);
      solve(root->left,count,k,v);
    solve(root->right,count,k,v);
    for(int i=v.size()-1;i>=0;i--)
    {
        sum+=v[i];
        if(sum==k)
        count++;
    }
    v.pop_back();
      
  }
    int sumK(Node *root,int k)
    {
       
       vector<int>path;
        int count=0;
       solve(root,count,k,path);
       return count;
    }
};
