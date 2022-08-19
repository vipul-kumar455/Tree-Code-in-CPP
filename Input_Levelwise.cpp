
#include <bits/stdc++.h>

using namespace std;
template <typename T>
class Tree
{
    public:
    T data;
   vector<Tree<T>*> child;
   Tree(T data)
   {
       this->data=data;
   }
};
Tree<int>* input()
{
    int rootdata;
    cout<<" Enter data"<<endl;
    cin>>rootdata;
    Tree<int>* root=new Tree<int>(rootdata);
    int n;
    cout<<"enter num of children"<<rootdata<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Tree<int>* child=input();
        root->child.push_back(child);
    }
    return root;
}
Tree<int>* level()
{
    int rootdata;
    cout<<"Ener Data: "<<endl;
    cin>>rootdata;
    Tree<int>* root=new Tree<int>(rootdata);
    queue<Tree<int>*>pending ;
    pending.push(root);
    while(pending.size()!=0)
    {
        Tree<int>* front=pending.front();
        pending.pop();
        cout<<"Enter num of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++)
        {
            int childata;
            cout<<"enter"<<i<<"th child of"<<front->data<<endl;
            cin>>childata;
            Tree<int>* child=new Tree<int>(childata);
            front->child.push_back(child);
            pending.push(child);
        }
    }
    return root;
}
void print(Tree<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<": ";
    for(int i=0;i<root->child.size();i++)
    {
        cout<<root->child[i]->data<<" ,";
    }
    cout<<endl;
    for(int i=0;i<root->child.size();i++)
    {
        print(root->child[i]);
    }
}
int main()
{
    Tree<int>* root=level();
    print(root);
return 0;
    
}

