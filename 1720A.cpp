#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;
    while (T--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        int count;
        if (((double)a / (double)b) == ((double)c / (double)d))
            count = 0;
        else if ((a == 0) || (c == 0))
            count = 1;
        else if (((a * d) % (b * c) == 0) || ((c * b) % (a * d) == 0))
            count = 1;
        else
            count = 2;
        cout << count << endl;
    }
    return 0;
}