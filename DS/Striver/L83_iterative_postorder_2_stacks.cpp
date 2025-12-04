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
stack<int> postorder(TreeNode *root)
{
    stack<TreeNode *> s;
    stack<int> ans;
    s.push(root);
    
    TreeNode* temp;
    while (!s.empty())
    {
        temp=s.top();
        ans.push(temp->data);
        s.pop();
        if(temp->left!=nullptr)
            s.push(temp->left);
        if(temp->right!=nullptr)
            s.push(temp->right);
        
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
    stack<int> q = postorder(root);
    while(!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    return 0;
}