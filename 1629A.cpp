#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int n,k,m,b;
        cin >> n >> k;
        int x[1005] = {0};
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            a[i] = m;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b;
            x[a[i]] += b;
        }
        for (long long i = 0; i <= k and i < 1005; i++)
        {
            k += x[i];
            x[i] = 0;
        }
        cout << k << endl;
    }
    return 0;
}