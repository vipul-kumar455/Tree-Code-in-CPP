 void solve(Node *root,int maxlen,int len,int sum,int maxsum)
    {
        if(root==NULL)
        {
            if(len>maxlen)
            {
                maxlen=len;
                maxsum=sum;
            }
            else if(len==maxlen)
            {
                maxsum=max(sum,maxsum);
            }
        }
        sum+=root->data;
        solve(root->left,maxlen,len+1,sum,maxsum);
         solve(root->right,maxlen,len+1,sum,maxsum);
       
    }
       int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int len=0;
        int maxlen=0;
        int sum=0;
        int maxsum=0;
        solve(root,maxlen,len,sum,maxsum);
        return maxsum;
        
    }
};
