
   
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(r1==NULL && r2!=NULL || r1!=NULL && r2==NULL)
        return 0;
        else if(r1==NULL && r2==NULL)
        return 1;
        bool l=isIdentical(r1->left,r2->left);
    bool r=isIdentical(r1->right,r2->right);
    bool val=r1->data==r2->data;
    
    if(l && r && val)
    return 1;
    else
    return 0;
    }
   
    
};
