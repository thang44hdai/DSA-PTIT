#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long
int n, k;
set<int> st;
int a[50];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        int i = k;
        while (i > 0 and a[i] >= n - k + i)
            i--;
        if (i == 0)
            cout << k;
        else
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[i] + j - i;
            int len = st.size();
            for (int j = 1; j <= k; j++)
                st.insert(a[j]);
            cout << st.size() - len;
        }
        st.clear();
        cout << "\n";
    }
    return 0;
}