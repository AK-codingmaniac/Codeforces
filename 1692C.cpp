#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        char pt[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> pt[i][j];
            }
        }
        int r = 0, c = 0, n = 8;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (i - 1 >= 0 && j - 1 >= 0 && i + 1 < n && j + 1 < n)
                {

                    if (pt[i][j] == '#' && pt[i - 1][j - 1] == '#' && pt[i + 1][j + 1] == '#' && pt[i - 1][j + 1] == '#' && pt[i + 1][j - 1] == '#')
                    {

                        r = i + 1;
                        c = j + 1;
                        break;
                    }
                }
                if (r != 0 && c != 0)
                {
                    break;
                }
            }
        }
        cout << r << " " << c << endl;
        T--;
    }
    return 0;
}