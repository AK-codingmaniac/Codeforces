#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, c = 0;
    cin >> n >> x;
    long long ans;
    ans = x;
    c = 0;
    int cur;
    char type;
    for (int i = 0; i < n; ++i)
    {
        cin>>type>>cur;
        if (type == '+')
        {
            ans = ans + cur;
        }
        else if (ans >= cur)
        {
            ans = ans - cur;
        }
        else
        {
            ++c;
        }
    }
    cout << ans << " " << c << endl;
    return 0;
}