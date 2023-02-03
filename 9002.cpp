#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int v, e;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> v;
    vector<pair<int, int>> vt;
    for (int i = 1; i <= v; i++)
    {
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> s)
        {
            int x = stoi(s);
            if (x > i)
                vt.push_back({i, x});
        }
    }
    for (auto i : vt)
        cout << i.first << " " << i.second << "\n";
    return 0;
}