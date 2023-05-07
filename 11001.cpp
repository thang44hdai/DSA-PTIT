#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

struct Node
{
    char c;
    Node *left, *right;
    Node(char x)
    {
        this->c = x;
        this->left = NULL;
        this->right = NULL;
    }
};
void inOrder(Node *x)
{
    if (x)
    {
        inOrder(x->left);
        cout << x->c;
        inOrder(x->right);
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
        string s;
        cin >> s;
        stack<Node *> st;
        for (char i : s)
        {
            if (i == '+' or i == '-' or i == '*' or i == '/')
            {
                Node *tmp = new Node(i);
                tmp->right = st.top();
                st.pop();
                tmp->left = st.top();
                st.pop();
                st.push(tmp);
            }
            else
                st.push(new Node(i));
        }
        inOrder(st.top());
        cout << "\n";
    }
    return 0;
}