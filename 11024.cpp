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
typedef Node *node;
void buildTree(node &root, int x)
{
   if (root == NULL)
      root = new Node(x);
   else
   {
      if (root->val > x)
         buildTree(root->left, x);
      else
         buildTree(root->right, x);
   }
}
void preOrder(node root)
{
   if (root)
   {
      cout << root->val << " ";
      preOrder(root->left);
      preOrder(root->right);
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
      for (auto &i : a)
         cin >> i;
      sort(a, a + n);
      n = (n % 2 == 0) ? ((n - 1) / 2) : (n / 2);
      cout << a[n] << "\n";
   }
   return 0;
}