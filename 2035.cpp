#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    string s[n];
    for (auto &i : s)
        cin >> i;
    int hv[k];
    for (int i = 0; i < k; i++)
        hv[i] = i + 1;
    int Max = 999999999;
    while (1)
    {
        vector<int> vt;
        for (auto i : s)
        {
            int sum = 0;
            for (auto j : hv)
                sum = sum * 10 + i[j - 1] - '0';
            vt.push_back(sum);
        }
        sort(vt.begin(), vt.end());
        Max = min(Max, vt[n - 1] - vt[0]);
        int idx = k - 2;
        while (idx >= 0 and hv[idx] > hv[idx + 1])
            idx--;
        if (idx < 0)
            break;
        int x = k - 1;
        while (hv[x] < hv[idx])
            x--;
        swap(hv[idx], hv[x]);
        int l = idx + 1, r = k - 1;
        while (l < r)
            swap(hv[l++], hv[r--]);
    }
    cout << Max;
    return 0;
}