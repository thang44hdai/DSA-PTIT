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
unordered_map<int, binTree> mp;
void buildTree(binTree &root, int x, int y, char z)
{
    if (!root)
    {
        mp[x] = new Node(x);
        root = mp[x];
        if (z == 'L')
        {
            mp[x]->left = new Node(y);
            mp[y] = mp[x]->left;
        }
        else
        {
            mp[x]->right = new Node(y);
            mp[y] = mp[x]->right;
        }
    }
    else
    {
        if (z == 'L')
        {
            mp[x]->left = new Node(y);
            mp[y] = mp[x]->left;
        }
        else
        {
            mp[x]->right = new Node(y);
            mp[y] = mp[x]->right;
        }
    }
}
bool isLeaf(binTree root)
{
    return root->right == NULL and root->left == NULL;
}
void total(binTree root, int &sum)
{
    if (root)
    {
        if (root->right and isLeaf(root->right))
            sum += root->right->val;
        if (root->left and !isLeaf(root->left))
            total(root->left, sum);
        if (root->right and !isLeaf(root->right))
            total(root->right, sum);
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
        int sum = 0;
        total(root, sum);
        cout << sum << "\n";
    }
    return 0;
}