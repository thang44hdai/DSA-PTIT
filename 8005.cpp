#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n;
vector<string> vt;
void sinh()
{
    queue<string> q;
    q.push("1");
    vt.push_back("1");
    while (1)
    {
        string top = q.front();
        q.pop();
        q.push(top + "0");
        q.push(top + "1");
        vt.push_back(top + "0");
        vt.push_back(top + "1");
        if (vt.size() > 10000)
            return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cout << vt[i] << " ";
        cout << "\n";
    }
    return 0;
}