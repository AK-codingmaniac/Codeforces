#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        string s;
        cin >> s;
        if (s[0] != 'y' && s[0] != 'Y')
        {
            cout << "NO\n";
        }
        else if (s[1] != 'e' && s[1] != 'E')
        {
            cout << "NO\n";
        }
        else if (s[2] != 's' && s[2] != 'S')
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
        T--;
    }
    return 0;
}