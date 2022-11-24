#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define ll long long

int n;
string s = "8";
char a[2] = {'6', '8'};
void check()
{
    if (s[0] == '8' and s[n - 1] == '6' and s.find("88") == -1 and s.find("6666") == -1)
        cout << s << "\n";
}
void Try()
{
    if (s.find("88") != -1 or s.find("6666") != -1)
        return;
    if (s.length() == n)
    {
        check();
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        s += a[i];
        Try();
        s.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    Try();
    return 0;
}