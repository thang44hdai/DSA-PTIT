#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void sinh()
{
    queue<string> q;
    q.push("9");
    while (q.size())
    {
        string s = q.front();
        q.pop();
        int x = 0;
        for (char i : s)
        {
            x = x * 10 + (i - '0');
            x %= n;
        }
        if (x == 0)
        {
            cout << s << endl;
            return;
        }
        q.push(s + "0");
        q.push(s + "9");
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sinh();
    }
    return 0;
}