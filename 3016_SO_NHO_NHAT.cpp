#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int s, d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s >> d;
        vector<int> vt;
        if (s > 9 * d)
        {
            cout << -1 << "\n";
            continue;
        }
        while (s > 9)
            s -= 9, d--, vt.push_back(9);
        int n = vt.size();
        int len = d - n;
        if (len > s)
        {
            vt.push_back(s - 1);
            s--, len--;
            for (int i = 1; i <= len - 1; i++)
                vt.push_back(0);
            vt.push_back(1);
        }
        else 
        {
            
        }
        for(auto i: vt)
            cout<<i;
        cout<<"\n";
    }
    return 0;
}