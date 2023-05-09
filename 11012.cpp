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
void buildTree(binTree &root, int x, int y, char z)
{
    if (!root)
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
string s1, s2;
void preOrder(binTree root, string &s)
{
    if (root)
    {
        s += to_string(root->val);
        preOrder(root->left, s);
        preOrder(root->right, s);
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
        binTree root1 = NULL;
        for (int i = 1; i <= n; i++)
        {
            int x, y;
            char z;
            cin >> x >> y >> z;
            buildTree(root1, x, y, z);
        }
        cin >> n;
        binTree root2 = NULL;
        for (int i = 1; i <= n; i++)
        {
            int x, y;
            char z;
            cin >> x >> y >> z;
            buildTree(root2, x, y, z);
        }
        s1 = "", s2 = "";
        preOrder(root1, s1);
        preOrder(root2, s2);
        cout << (s1 == s2) << "\n";
    }
    return 0;
}