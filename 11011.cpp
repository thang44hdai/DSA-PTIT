#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int check;
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
void buildTree(binTree &root, int x, int y, char z)
{
    if (root == NULL)
    {
        root = new Node(x);
        if (z == 'L')
            root->left = new Node(y);
        else
            root->right = new Node(y);
    }
    else
    {
        if (root->val == x)
        {
            if (z == 'L')
                root->left = new Node(y);
            else
                root->right = new Node(y);
        }
        else
        {
            if (root->left)
                buildTree(root->left, x, y, z);
            if (root->right)
                buildTree(root->right, x, y, z);
        }
    }
}
void full_binary_tree(binTree root)
{
    if (!check)
        return;
    if (root)
    {
        if (root->left and root->right == NULL)
        {
            check = 0;
            return;
        }
        if (root->left == NULL and root->right)
        {
            check = 0;
            return;
        }
        full_binary_tree(root->left);
        full_binary_tree(root->right);
    }
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
            int x, y;
            char z;
            cin >> x >> y >> z;
            buildTree(root, x, y, z);
        }
        check = 1;
        full_binary_tree(root);
        cout << check << "\n";
    }
    return 0;
}