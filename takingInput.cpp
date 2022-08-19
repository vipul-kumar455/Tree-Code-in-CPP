
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
    Tree<int>* root=input();
    print(root);
return 0;
    
}

