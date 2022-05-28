#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        int count = 1;
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        while (w % 2 == 0)
        {
            count = count * 2;
            w = w / 2;
        }
        while (h % 2 == 0)
        {
            count = count * 2;
            h = h / 2;
        }
        if (count >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}