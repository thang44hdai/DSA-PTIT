#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
queue<string> q;
vector<string> vt;
void sinh()
{
    while (1)
    {
        string top = q.front();
        q.pop();
        string tmp = top;
        reverse(tmp.begin(), tmp.end());
        if ((top + tmp) != "45" and (top + tmp) != "54")
            vt.push_back(top + tmp);
        q.push(top + "4");
        q.push(top + "5");
        if (vt.size() > 10000)
            return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    q.push("4");
    q.push("5");
    sinh();
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cout << vt[i] << " ";
        cout << "\n";
    }
    return 0;
}
