#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int u, v, s, t;

int vs[1005];
int e[1005];
vector<int> vt[1005];

void dfs(int x)
{
    vs[x] = 1;
    for (auto i : vt[x])
    {
        if (!vs[i])
        {
            e[i] = x;
            if (i == t)
            {
                vs[i] = 1;
                return;
            }
            dfs(i);
        }
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
        cin >> u >> v >> s >> t;
        cout << u << " " << v << " " << s << " " << t<<"\n";
        // while (v--)
        // {
        //     int a, b;
        //     cin>>a>>b;
        //     vt[a].push_back(b);
        // }
        // dfs(s);
        // if (!e[t])
        //     cout << -1;
        // else
        // {
        //     vector<int> ans;
        //     int x = e[t];
        //     ans.push_back(t);
        //     while (x != s)
        //     {
        //         ans.push_back(x);
        //         x = e[x];
        //     }
        //     for (int i = ans.size() - 1; i >= 0; i--)
        //         cout << ans[i] << " ";
        // }
        // cout <<1<< "\n";
    }

    return 0;
}