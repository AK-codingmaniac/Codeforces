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
        if (n == 1)
        {
            cout << "1" << endl;
        }
        else if (n == 2)
        {
            cout << "2 1" << endl;
        }
        else if (n == 3)
        {
            cout << "-1" << endl;
        }
        else if (n == 4)
        {
            cout << "3 4 2 1" << endl;
        }
        else
        {
            for (int i = n; i > n / 2 + 1; i--)
            {
                cout << i << " ";
            }
            for (int i = 1; i <= n / 2 + 1; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        T--;
    }
}