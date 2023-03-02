#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int K;
        string S;
        cin >> K >> S;
        int n = S.length();
        for (int i = 0; i < n - 1 && K > 0; i++)
        {
            int min_idx = i;
            for (int j = i + 1; j < n; j++)
            {
                if (S[j] >= S[min_idx])
                {
                    min_idx = j;
                }
            }
            if (min_idx != i)
            {
                swap(S[i], S[min_idx]);
                K--;
            }
        }
        cout << S << endl;
    }
    return 0;
}