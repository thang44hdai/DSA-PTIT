#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;

int n, k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vector<int> vt;
    cin.ignore();
    while (t--)
    {
        cin >> n;
        int a[n];
        vector<int> vt;
        for (auto &i : a)
        {
            cin >> i;
            vt.push_back(i);
        }
        sort(vt.begin(), vt.end());
        int l = 0, r = n - 1;
        int idx = n / 2;
        if (n % 2)
        {
            if (vt[idx] != a[idx])
            {
                cout << "No" << "\n";                   
                continue;
            }
        }
        else
        {
            if ((vt[idx] != a[idx] and vt[idx - 1] != a[idx - 1]) and (vt[idx] != a[idx - 1] and vt[idx - 1] != a[idx]))
            {
                cout << "No"<< "\n";                    
                continue;
            }
        }
        bool check = true;
        while (l < r)
        {
            if ((a[l] == vt[l] and a[r] == vt[r]) or (a[l] == vt[r] and a[r] == vt[l]))
            {
                l++, r--;
                continue;
            }
            else
            {
                cout << "No"<< "\n";                    
                check = false;
                break;
            }
        }
        if (check)
            cout << "Yes"<< "\n";                
    }

    return 0;
}