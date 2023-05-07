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
void buildTree(binTree &root, int n, int a[])
{
    queue<binTree> q;
    int idx = 1;
    root = new Node(a[0]);
    q.push(root);
    while (q.size())
    {
        binTree tmp = q.front();
        q.pop();
        if (idx < n)
        {
            tmp->left = new Node(a[idx]);
            q.push(tmp->left);
            idx++;
        }
        if (idx < n)
        {
            tmp->right = new Node(a[idx]);
            q.push(tmp->right);
            idx++;
        }
    }
}
void inOrder(binTree root)
{
    if (root->left)
        inOrder(root->left);
    cout << root->val << " ";
    if (root->right)
        inOrder(root->right);
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
        binTree root = NULL;
        buildTree(root, n, a);
        inOrder(root);
        cout << "\n";
    }
    return 0;
}
