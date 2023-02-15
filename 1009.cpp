#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;
int s[] = {'A', 'B'};
vector<string> vt;
string ans = "";
bool check()
{
    string c(k, 'A');
    int idx = ans.find(c);
    if (idx != -1)
    {
        int cut = ans.find(c, idx + 1);
        if (cut == -1)
            return true;
        return false;
    }
    return false;
}
void Try(int i = 1)
{
    if (i == n + 1)
    {
        if (check())
            vt.push_back(ans);
        return;
    }
    for (int j = 0; j <= 1; j++)
    {
        ans += s[j];
        Try(i + 1);
        ans.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    Try();
    sort(vt.begin(), vt.end());
    cout << vt.size() << "\n";
    for (auto i : vt)
        cout << i << "\n";
    return 0;
}
