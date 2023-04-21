#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
// Kosaraju
int v, e;
vector<int> ke[1005], dao[1005];
int ok[1005];
stack<int> st;
void bfs1(int u)
{
    queue<int> q;
    q.push(u);
    ok[u] = 1;
    st.push(u);
    while (q.size())
    {
        int top = q.front();
        q.pop();
        for (auto i : ke[top])
        {
            if (!ok[i])
            {
                ok[i] = 1;
                q.push(i);
                st.push(i);
            }
        }
    }
}
void bfs2(int u)
{
    queue<int> q;
    q.push(u);
    ok[u] = 1;
    while (q.size())
    {
        int top = q.front();
        q.pop();
        for (auto i : dao[top])
        {
            if (!ok[i])
            {
                ok[i] = 1;
                q.push(i);
                st.push(i);
            }
        }
    }
}
void kosaraju()
{
    fill(ok, ok + v + 5, 0);
    int cnt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!ok[i])
        {
            cnt++;
            bfs1(i);
            while (st.size())
            {
                int top = st.top();
                st.pop();
                if (!ok[top])
                    bfs2(top);
            }
        }
    }
    if (cnt == 1)
        cout << "YES";
    else
        cout << "NO";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        cin >> v >> e;
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            dao[y].push_back(x);
        }
        kosaraju();
        for (int i = 1; i <= v; i++)
        {
            ke[i].clear();
            dao[i].clear();
        }
    }

    return 0;
}