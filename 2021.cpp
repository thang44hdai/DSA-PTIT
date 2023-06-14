#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        stack<int> st;
        vector<int> vt, ans;
        vt.push_back(-1);
        stack<int> st1;
        int cnt = 0;
        st1.push(a[1]);
        for (int i = 2; i <= n; i++)
        {
            while (st1.size() and a[i] > st1.top())
                st1.pop();
            if (st1.size())
                cnt++;
            st1.push(a[i]);
        }
        cout << cnt;
        cout << "\n";
    }
    return 0;
}