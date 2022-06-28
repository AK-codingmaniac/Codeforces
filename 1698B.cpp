#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long ans = 0;
        if (k == 1)
        {
            ans = (n - 1) / 2;
        }
        else
        {
            for (long long i = 1; i < n - 1; i++)
            {
                if (arr[i] > arr[i - 1] + arr[i + 1])
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
        T--;
    }
    return 0;
}