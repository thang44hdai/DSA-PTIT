#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
bool check[1001];
vector<int> A[1001];

struct kru
{
    int u, v, w;
};

vector<kru> V;

bool cmp(kru a, kru b)
{
    return a.w < b.w;
}

void DFS(int u)
{
    check[u] = true;
    for (auto x : A[u])
        if (!check[x])
            DFS(x);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 1001; i++)
            A[i].clear(), check[i] = false;
        V.clear();
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            kru a;
            cin >> a.u >> a.v >> a.w;
            V.push_back(a);
        }
        sort(V.begin(), V.end(), cmp);
        int res = 0;
        for (auto x : V)
        {
            memset(check, false, sizeof(check));
            DFS(x.u);
            if (!check[x.v])
            {
                res += x.w;
                A[x.u].push_back(x.v);
                A[x.v].push_back(x.u);
            }
        }
        cout << res << endl;
    }
}