#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        partition(a.begin(), a.end(), [&](const int u)
                  { return u % 2; });
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " \n"[i == n - 1];
        }
        T--;
    }
    return 0;
}