#include <iostream>
using namespace std;
class TreeNode
{
    public:
    int data;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        data=val;
        left = right = nullptr;
    }
};

TreeNode* deleteNode(TreeNode* root, int key) 
{
    if (root == nullptr)
        return nullptr;

    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    else
    {
        // 1. No child
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }

        // 2. One child
        else if (root->left == nullptr)
        {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // 3. Two children
        else
        {
            // inorder successor
            TreeNode* succ = root->right;
            while (succ->left != nullptr)
                succ = succ->left;

            root->data = succ->data;
            root->right = deleteNode(root->right, succ->data);
        }
    }

    return root;
}
