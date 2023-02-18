#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
string s;
vector<char> vt;
vector<vector<char>> ans;
void Try(int i = 1)
{
    if (vt.size())
        ans.push_back(vt);
    for (int j = i; j <= n; j++)
    {
        vt.push_back(s[j]);
        Try(j + 1);
        vt.pop_back();
    }
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
        cin >> n >> s;
        ans.clear();
        sort(s.begin(), s.end());
        s = " " + s;
        Try();
        for (auto i : ans)
        {
            for (auto j : i)
                cout << j;
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
