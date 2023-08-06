#include <iostream>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k, ans = 0;
        std::cin >> n >> k;
        for (int i = n / 2; i <= n; i++)
        {
            int cnt = 1, j = i, pre = n;
            while (j <= pre)
            {
                cnt++;
                int tmp = j;
                j = pre - j;
                pre = tmp;
            }
            if (cnt >= k)
            {
                ans++;
            }
        }
        std::cout << ans << '\n';
    }
    return 0;
}