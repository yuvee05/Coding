#include <iostream>
using namespace std;
class treenode
{
public:
    int data;
    treenode *left, *right;
    treenode(int val)
    {
        data=val;
        left=right=nullptr;
    }
};
void preorder(treenode *root)
{
    if(root==nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    treenode* root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);
    root->left->left = new treenode(4);
    root->left->right = new treenode(5);
    root->right->right = new treenode(6);
    preorder(root);
    return 0;
}