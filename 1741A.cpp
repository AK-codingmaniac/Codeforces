#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        string a, b;
        cin >> a >> b;
        int p = 0, q = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == 'X')
                p++;
        }
        for (int i = 0; i < b.length(); i++)
        {
            if (b[i] == 'X')
                q++;
        }
        if (a[a.length() - 1] == 'S' && b[b.length() - 1] == 'M')
            cout << "<\n";
        else if (a[a.length() - 1] == 'S' && b[b.length() - 1] == 'L')
            cout << "<\n";
        else if (a[a.length() - 1] == 'M' && b[b.length() - 1] == 'L')
            cout << "<\n";
        else if (a[a.length() - 1] == 'L' && b[b.length() - 1] == 'S')
            cout << ">\n";
        else if (a[a.length() - 1] == 'L' && b[b.length() - 1] == 'M')
            cout << ">\n";
        else if (a[a.length() - 1] == 'M' && b[b.length() - 1] == 'S')
            cout << ">\n";
        else
        {
            if (a[a.length() - 1] == 'S')
            {
                if (p == q)
                    cout << "=\n";
                else if (p > q)
                    cout << "<\n";
                else
                    cout << ">\n";
            }
            else
            {
                if (p == q)
                    cout << "=\n";
                else if (p > q)
                    cout << ">\n";
                else
                    cout << "<\n";
            }
        }
        T--;
    }
}