#include <bits/stdc++.h>
#pragma GCC optimze("Ofast")
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (auto &i : a)
            cin >> i;
        deque<int> dq;
        int ans = INT_MIN;
        for (int i = 0; i < k; i++)
        {
            dq.push_back(i);
            ans = max(ans, a[i]);
        }
        cout<<ans<<" ";
        for(int i=k;i<n;i++)
        {
            dq.push_back(i);
            ans=max(ans, a[i]);
            if(ans==a[dq.front()]);
        }
    }
    return 0;
}