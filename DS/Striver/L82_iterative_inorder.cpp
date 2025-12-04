#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode *left,*right;
    TreeNode(int val)
    {
        data=val;
        left = right = nullptr;
    }
};

queue<int> inorder(TreeNode *root)
{
    stack<TreeNode*> s;
    queue<int> ans;
    TreeNode *node = root;
    while(true)
    {
        if(node!=nullptr)
        {
            s.push(node);
            node=node->left;
        }
        else
        {
            if(s.empty())
                break;
            node=s.top();
            s.pop();
            ans.push(node->data);
            node=node->right;
        }
    }
    return ans;
}
int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    queue<int> q = inorder(root);
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}