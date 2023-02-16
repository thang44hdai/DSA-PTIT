#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
vector<string> vt;
void init()
{
    vt.push_back("0");
    vt.push_back("1");
    for (int i = 2; i <= n; i++)
    {
        int len = vt.size();
        for (int j = len - 1; j >= 0; j--)
            vt.push_back(vt[j]);
        for (int j = 0; j < len; j++)
            vt[j] = "0" + vt[j];
        for (int j = len; j < 2 * len; j++)
            vt[j] = "1" + vt[j];
    }
    for (auto i : vt)
        cout << i << " ";
    vt.clear();
    cout << "\n";
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
        cin >> n;
        init();
    }

    return 0;
}