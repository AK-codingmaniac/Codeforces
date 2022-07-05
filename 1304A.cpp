#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        cout << ((y - x) % (a + b) == 0 ? (y - x) / (a + b) : -1) << endl;
        T--;
    }
    return 0;
}