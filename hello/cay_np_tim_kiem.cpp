#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
struct Node
{
    int val;
    Node *left, *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
typedef Node *binTree;
void buildTree(binTree &root, int val)
{
    if (!root)
    {
        root = new Node(val);
        return;
    }
    if (root->val > val)
        buildTree(root->left, val);
    else
        buildTree(root->left, val);
}
void deleNode(binTree root, int val)
{
    if (root->val == val)
    {
        binTree tmp = NULL;
    }
    else if (root->val > val)
        deleNode(root->left, val);
    else
        buildTree(root->left, val);
}
void preOrder(binTree root)
{
    cout << root->val << " ";
    if (root->left)
        preOrder(root->left);
    if (root->right)
        preOrder(root->right);
}
void inOrder(binTree root)
{
    if (root->left)
        inOrder(root->left);
    cout << root->val << " ";
    if (root->right)
        inOrder(root->right);
}
void neOrder(binTree root)
{
    if (root->left)
        neOrder(root->left);
    if (root->right)
        neOrder(root->right);
    cout << root->val << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int q;
    binTree root = NULL;
    while (cin >> q)
    {
        if (q == 1)
        {
        }
    }
    return 0;
}
