#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *Buildtree(vector<int> preorder)
{
    static int idx = -1;
    idx++;
    if (preorder[idx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preorder[idx]);
    root->left = Buildtree(preorder);
    root->right = Buildtree(preorder);
    return root;
};
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void PostOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}
int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = Buildtree(preorder);
    // preOrder(root);
    // inOrder(root);
    PostOrder(root);
    return 0;
}