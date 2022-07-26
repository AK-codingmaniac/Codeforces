#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        long long p, a, b, c, ans;
        cin >> p >> a >> b >> c;
        long long x = (a - (p % a)) % a;
        long long y = (b - (p % b)) % b;
        long long z = (c - (p % c)) % c;
        ans = (x < y) ? x : y;
        ans = (ans < z) ? ans : z;
        cout << ans << endl;
        T--;
    }

    return 0;
}