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
    }
    else
    {
        if (root->val > val)
            buildTree(root->left, val);
        else
            buildTree(root->right, val);
    }
}
bool isLeaf(binTree root)
{
    return root->left == NULL and root->right == NULL;
}
void postOrder(binTree root)
{
    if (root->left)
        postOrder(root->left);
    if (root->right)
        postOrder(root->right);
    cout << root->val << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        binTree root = NULL;
        while (n--)
        {
            int x;
            cin >> x;
            buildTree(root, x);
        }
        postOrder(root);
        cout << "\n";
    }
    return 0;
}