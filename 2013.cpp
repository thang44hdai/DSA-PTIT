#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000], ok; // ok: con sinh duoc

void kt()
{ // khoi tao cau hinh dau tien
    for (int i = 0; i < k; i++)
    {
        a[i] = i + 1;
    }
}

void sinh()
{
    int i = k - 1;
    while (i >= 0 && a[i] == n - k + (i + 1))
    {
        i--;
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j < k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int checknt(int x)
{
    if (x <= 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
                return 0;
        }
        return 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q, p, s; // k: so phan tu trong 1 bo, p: >=, s: tong
        cin >> q >> p >> s;
        k = q;
        kt();
        vector<int> b; // luu cac so nguyen to
        for (int i = p + 1; i <= s; i++)
        {
            if (checknt(i) == 1)
                b.push_back(i);
        }
        n = b.size();
        ok = 1;
        if (k > n)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<string> v;
            while (ok == 1)
            {
                int tong = 0;
                for (int i = 0; i < k; i++)
                {
                    int val = a[i] - 1;
                    tong += b[val];
                }
                if (tong == s)
                {
                    string sq = "";
                    for (int i = 0; i < k; i++)
                    {
                        int val = a[i] - 1;
                        sq = sq + to_string(b[val]) + " ";
                    }
                    v.push_back(sq);
                }
                sinh();
            }
            cout << v.size() << endl;
            for (auto i : v)
                cout << i << endl;
        }
    }
}