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
    if (root == NULL)
        root = new Node(val);
    else
    {
        if (root->val > val)
            buildTree(root->left, val);
        else
            buildTree(root->right, val);
    }
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
        neOrder(root);
        cout << "\n";
    }
    return 0;
}