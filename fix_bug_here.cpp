#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int D[n];
    int A[n], B[n], N1[n], N2[n];
    int index1 = 1, index2 = 1;
    for (int i = 1; i <= n; i++)
    {
        D[i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> B[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (B[i] >= A[i])
        {
            N1[index1] = D[i];
            index1++;
        }
        else
        {
            N2[index2] = D[i];
            index2++;
        }
    }

    for (int i = 1; i < index1 - 1; i++)
    {
        for (int j = 1; j < index1 - i; j++)
        {
            if (A[N1[j]] > A[N1[j + 1]])
            {
                int temp = N1[j];
                N1[j] = N1[j + 1];
                N1[j + 1] = temp;
            }
        }
    }

    for (int i = 1; i < index2 - 1; i++)
    {
        for (int j = 1; j < index2 - i; j++)
        {
            if (B[N2[j]] < B[N2[j + 1]])
            {
                int temp = N2[j];
                N2[j] = N2[j + 1];
                N2[j + 1] = temp;
            }
        }
    }
    int len2 = sizeof(N2) / sizeof(int);
    for (int i = 1; i <= len2; i++)
    {
        N1[index1] = N2[i];
        index1++;
    }
    int len1 = sizeof(N1) / sizeof(int);
    cout<<len1<<endl;
    for (int i = 1; i <= len1; i++)
    {
        if (i != len1)
        {
            cout << N1[i] << " ";
        }
        else
        {
            cout << N1[i];
        }
    }
    return 0;
}