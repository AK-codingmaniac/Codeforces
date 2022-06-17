#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int a, b;
        cin >> a >> b;
        for (int i = 0; i < min(a, b); ++i)
            cout << "01";
        for (int i = 0; i < abs(a - b); ++i)
            cout << (a < b ? 1 : 0);
        cout << '\n';
        T--;
    }
    return 0;
}