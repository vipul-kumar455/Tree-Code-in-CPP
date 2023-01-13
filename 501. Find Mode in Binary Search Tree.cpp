
class Solution {
public:
unordered_map<int,int>mp;
void inorder(TreeNode* root)
{
    if(root!=NULL)
 {
    mp[root->val]++;
    inorder(root->left);
    inorder(root->right);
 }

}
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        vector<int>v;
        int res=INT_MIN;
        for(auto i:mp)
        {
            if(i.second>res)
            {
                res=i.second;
            }
        }
         for(auto i:mp)
        {
            if(i.second==res)
            {
               v.push_back(i.first);
            }
        }
        return v;
    }
};
