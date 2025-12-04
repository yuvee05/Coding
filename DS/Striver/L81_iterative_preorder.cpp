#include <iostream>
#include <stack>
#include <queue>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left, *right;

    TreeNode(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
queue<int> preorder(TreeNode *root)
{
    stack<TreeNode *> s;
    queue<int> ans;
    s.push(root);
    
    TreeNode* temp;
    while (!s.empty())
    {
        temp=s.top();
        ans.push(temp->data);
        s.pop();
        if(temp->right!=nullptr)
            s.push(temp->right);
        if(temp->left!=nullptr)
            s.push(temp->left);
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
    queue<int> q = preorder(root);
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}