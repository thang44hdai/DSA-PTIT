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
void preOrder(binTree root)
{
    cout << root->val << " ";
    if (root->left)
        preOrder(root->left);
    if (root->right)
        preOrder(root->right);
    
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
        preOrder(root);
        cout << "\n";
    }
    return 0;
}