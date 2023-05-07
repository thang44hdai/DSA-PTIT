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

void bfs(binTree T)
{
    queue<binTree> q;
    stack<int> st;
    q.push(T);
    binTree top;
    while (q.size())
    {
        top = q.front();
        q.pop();
        st.push(top->val);
        if (top->right)
            q.push(top->right);
        if (top->left)
            q.push(top->left);
    }
    while (st.size())
    {
        cout << st.top() << ' ';
        st.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1, n, child, par;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        unordered_map<int, binTree> m;
        cin >> par >> child >> c;
        binTree T = new Node(par);
        if (c == 'L')
        {
            T->left = new Node(child);
            m[child] = T->left;
        }
        else
        {
            T->right = new Node(child);
            m[child] = T->right;
        }
        m[par] = T;
        --n;
        while (n--)
        {
            cin >> par >> child >> c;
            if (c == 'L')
            {
                m[par]->left = new Node(child);
                m[child] = m[par]->left;
            }
            else
            {
                m[par]->right = new Node(child);
                m[child] = m[par]->right;
            }
        }
        bfs(T);
        cout << "\n";
    }
    return 0;
}
