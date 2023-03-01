#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int n, k;
vector<int> vt;
vector<vector<int>> ans;
// thứ tự nguyên tố
bool check(int i)
{
    int sqr = sqrt(i);
    for (int j = 2; j <= sqr; j++)
        if (i % j == 0)
            return false;
    return true;
}
void sinh()
{
    int a[k + 1];
    for (int i = 1; i <= k; i++)
        a[i] = i;
    while (1)
    {
        for (int i = 1; i <= k; i++)
            vt.push_back(a[i]);
        ans.push_back(vt);
        vt.clear();
        int i = k;
        while (i and a[i] >= n - k + i)
            i--;
        if (i == 0)
            return;
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    vector<int> a = {};
    ans.push_back(a);
    sinh();
    for (int i = 2; i < ans.size(); i++)
        if (check(i))
        {
            cout << i << ": ";
            for (auto j : ans[i])
                cout << j << " ";
            cout << "\n";
        }
    return 0;
}
