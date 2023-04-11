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
        queue<int> q;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == 1)
                cout << q.size() << "\n";
            else if (x == 2)
            {
                if (q.empty())
                    cout << "YES";
                else
                    cout << "NO";
                cout << "\n";
            }
            else if (x == 3)
            {
                int y;
                cin >> y;
                q.push(y);
            }
            else if (x == 4)
            {
                if (q.size())
                    q.pop();
            }
            else if (x == 5)
            {
                if (q.size())
                    cout << q.front();
                else
                    cout << -1;
                cout << "\n";
            }
            else
            {
                if (q.empty())
                    cout << -1 << "\n";
                else
                    cout << q.back() << "\n";
            }
        }
    }
    return 0;
}