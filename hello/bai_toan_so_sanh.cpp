#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;
vector<int> adj[10005];
int deg[10005];
int idx;
bool kahn()
{
    queue<int> q;
    for (int i = 1; i <= idx; i++)
    {
        if (deg[i] == 0)
        {
            q.push(i);
        }
    }
    vector<int> topo;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        topo.push_back(v);
        for (int x : adj[v])
        {
            deg[x]--;
            if (deg[x] == 0)
                q.push(x);
        }
    }
    if ((int)topo.size() < idx)
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> mp;
    idx = 1;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        if (!mp[v[0]])
        {
            mp[v[0]] = idx;
            idx++;
        }
        if (!mp[v[2]])
        {
            mp[v[2]] = idx;
            idx++;
        }
        if (v[1] == ">")
        {
            adj[mp[v[0]]].push_back(mp[v[2]]);
            deg[mp[v[2]]]++;
        }
        else
        {
            adj[mp[v[2]]].push_back(mp[v[0]]);
            deg[mp[v[0]]]++;
        }
    }
    if (kahn())
        cout << "impossible" << endl;
    else
        cout << "possible" << endl;
}