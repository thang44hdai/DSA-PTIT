#include<bits/stdc++.h>
using namespace std;
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
int main()
{
    faster();
    test()
    {
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        int f[10] = {};
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int j = 0; j < m; j++)
        {
            cin >> b[j];
            if(b[j] < 5) f[b[j]]++;
        }
        sort(b.begin(), b.end());
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0) continue;
            else if(a[i] == 1) cnt += f[0]; 
            else if(a[i] == 2) cnt += m - f[2] - f[3] - f[4];
            else if(a[i] == 3) cnt += m - f[3];
            else if(a[i] == 4) cnt += m - f[2] - f[3] - f[4];
            else
            {
                int pos = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
                if(pos != m)
                {
                    cnt += m - pos;
                }
                cnt += f[1] + f[0];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}