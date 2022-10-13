#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b + c)
            cout << "YES" << endl;
        else if (b == a + c)
            cout << "YES" << endl;
        else if (c == a + b)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
        T--;
    }
    return 0;
}