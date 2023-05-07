#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
string s[500];
struct Node
{
    string c;
    Node *left, *right;
    Node(string val)
    {
        this->c = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildTree(Node *&root, int i = 0)
{
    if (i < n)
    {
        root = new Node(s[i]);
        root->left = buildTree(root->left, 2 * i + 1);
        root->right = buildTree(root->right, 2 * i + 2);
    }
    return root;
}
ll cal(Node *root)
{
    if (root->c == "+")
        return cal(root->left) + cal(root->right);
    if (root->c == "-")
        return cal(root->left) - cal(root->right);
    if (root->c == "*")
        return cal(root->left) * cal(root->right);
    if (root->c == "/")
        return cal(root->left) / cal(root->right);
    return stoll(root->c);
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
        for (int i = 0; i < n; i++)
            cin >> s[i];
        Node *root = NULL;
        root = buildTree(root);
        cout << cal(root) << "\n";
    }
    return 0;
}