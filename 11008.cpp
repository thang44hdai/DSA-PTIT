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
int levelOrder(binTree root)
{
    int MAX = -1;
    queue<pair<binTree, int>> q;
    q.push({root, 0});
    while (q.size())
    {
        auto top = q.front();
        q.pop();
        if (top.first->left == NULL)
        {
            if (MAX == -1)
                MAX = top.second;
            else if (top.second != MAX)
                return 0;
        }
        else
            q.push({top.first->left, top.second + 1});
        if (top.first->right == NULL)
        {
            if (MAX == -1)
                MAX = top.second;
            else if (top.second != MAX)
                return 0;
        }
        else
            q.push({top.first->right, top.second + 1});
    }
    return 1;
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
        cout << levelOrder(root) << "\n";
    }
    return 0;
}