#include <bits/stdc++.h>
#define ll long long
using namespace std;
char Replace(char i)
{
    if (i == 'Y')
        return 'A';
    if (i == 'Z')
        return 'B';
    if (i == 'a')
        return 'y';
    if (i == 'b')
        return 'z';
    if (i >= 'A' and i <= 'Z')
        return (char)(i + 2);
    if (i >= 'a' and i <= 'z')
        return (char)(i - 2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin, s);
    for (auto i : s)
        if (isalpha(i))
            cout << Replace(i);
        else
            cout << i;
    return 0;
}