#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
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
typedef Node *node;
void buildTree(node &root, int l, int r, int a[])
{
    if (l > r)
        return;
    int mid = (l + r) / 2;
    root = new Node(a[(l + r) / 2]);
    buildTree(root->left, l, mid - 1, a);
    buildTree(root->right, mid + 1, r, a);
}
void postOrder(node root)
{
    if (root)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->val << " ";
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
        int a[n];
        for (int &i : a)
            cin >> i;
        sort(a, a + n);
        node root = NULL;
        buildTree(root, 0, n - 1, a);
        postOrder(root);
        cout << "\n";
    }
    return 0;
}