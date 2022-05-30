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
        int count = 0;
        if (a == b)
            count = 0;
        else
        {
            if (((a > b) && ((a - b) % 2 == 0)) || ((a < b) && ((b - a) % 2 != 0)))
            {
                count = 1;
            }
            else
            {
                count = 2;
            }
        }
        cout << count << endl;
        T--;
    }
    return 0;
}