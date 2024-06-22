#include <bits/stdc++.h>
using namespace std;

vector<int> ke[100005];
bool visit[100005];
int truoc[100005];
bool ok;
int du[2][100005];
int find(int u, int v)
{
    int dem = 0;
    while (u != v)
    {
        u = truoc[u];
        dem++;
    }
    return dem;
}
int find1(int u, int v)
{
    int dem = 0;
    while (u != v)
    {
        u = truoc[u];
        v = truoc[v];
        dem += 2;
    }
    return dem;
}
int main()
{
    memset(visit, false, sizeof(visit));
    memset(truoc, -1, sizeof(truoc));
    int n, m;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    stack<int> st;
    st.push(1);
    visit[1] = true;
    while (st.size())
    {
        int k = st.top();
        st.pop();
        for (int x : ke[k])
        {
            if (!visit[x])
            {
                visit[x] = true;
                truoc[x] = k;
                st.push(k);
                st.push(x);
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        du[1][i] = find(i, 1);
    }
    cin >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        int d1 = du[1][u], d2 = du[1][v];
        if (d1 == d2)
            cout << find1(u, v) << endl;
        if (d1 > d2)
        {
            int d = d1 - d2, kq = d;
            while (d--)
                u = truoc[u];
            cout << find1(u, v) + kq << endl;
        }
        if (d2 > d1)
        {
            int d = d2 - d1, kq = d;
            while (d--)
            {
                v = truoc[v];
            }
            cout << find1(u, v) + kq << endl;
        }
    }
}