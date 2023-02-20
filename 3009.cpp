#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
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
        cin >> n;
        pair<int, int> p[n];
        for (auto &i : p)
        {
            int x, y, z;
            cin >> x >> y >> z;
            i = {y, z};
        }
        sort(p, p + n, cmp);
        int cnt = 0, profit = 0;
        int dd[10005] = {};// check xem tại thời điểm i đã xong dl chưa
        for (auto i : p)
            for (int j = i.first; j >= 1; j--)
                if (!dd[j])
                {
                    dd[j] = 1;
                    cnt++;
                    profit += i.second;
                    break;
                }
        cout << cnt << " " << profit << "\n";
    }
    return 0;
}
