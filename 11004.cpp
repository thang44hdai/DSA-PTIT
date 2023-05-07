#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
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
void LevelOrder(binTree root)
{
    queue<binTree> q;
    q.push(root);
    while (q.size())
    {
        binTree top = q.front();
        q.pop();
        cout << top->val << " ";
        if (top->left)
            q.push(top->left);
        if (top->right)
            q.push(top->right);
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
        cin >> n;
        binTree root = NULL;
        while (n--)
        {
            int x, y;
            char z;
            cin >> x >> y >> z;
            buildTree(root, x, y, z);
        }
        LevelOrder(root);
        cout << "\n";
    }
    return 0;
}