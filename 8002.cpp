#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    queue<int> q;
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (s == "POP")
        {
            if (q.size())
                q.pop();
        }
        else if (s == "PRINTFRONT")
            if (q.size())
                cout << q.front() << "\n";
            else
                cout << "NONE\n";
    }
    return 0;
}