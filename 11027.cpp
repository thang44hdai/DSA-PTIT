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
bool check_leaf(node root)
{
    return (root->left == NULL and root->right == NULL);
}
int cnt = 0;
void cnt_leaf(node root)
{
    if (root)
    {
        if (check_leaf(root))
            cnt++;
        if (root->left)
            cnt_leaf(root->left);
        if (root->right)
            cnt_leaf(root->right);
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
        cnt = 0;
        cnt_leaf(root);
        cout << cnt << "\n";
    }
    return 0;
}