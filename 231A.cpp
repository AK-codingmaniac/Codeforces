#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a, b, c, count(0);
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        if ((a + b + c) >= 2)
        {
            count = count + 1;
        }
    }
    cout << count << endl;
    return 0;
}