#include <iostream>
using namespace std;
class TreeNode
{
    public:
    int data;
    TreeNode *left,*right;
    TreeNode(int val)
    {
        data=val;
        right = left = nullptr;
    }
};
int ceilfxn(TreeNode *root, int val)
{
    int ceil=-1;
    TreeNode *temp=root;
    while(temp!=nullptr)
    {
        if(temp->data>val)
        {
            ceil=temp->data;
            temp=temp->left;
        }
        else if(temp->data<val)
            temp=temp->right;
        else
        {
            ceil=temp->data;
            return ceil;
        }
    }
    return ceil;
}
int main()
{
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(13);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(6);
    root->right->left = new TreeNode(11);
    root->right->right = new TreeNode(14);
    root->left->left->left = new TreeNode(2);
    root->left->left->right = new TreeNode(4);
    root->left->right->right = new TreeNode(9);
    cout << ceilfxn(root,0);
    return 0;
}