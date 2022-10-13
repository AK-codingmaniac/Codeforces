#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        string ch[8];
        for (int i = 0; i < 8; i++)
            cin >> ch[i];
        int red = 0, blue = 0;
        int poke = 0;
        for (int i = 0; i < 8; i++)
        {
            red = 0;
            for (int j = 0; j < 8; j++)
            {
                if (ch[i][j] == 'R')
                    red++;
            }
            if (red == 8)
            {
                cout << "R" << endl;
                poke = 1;
                break;
            }
        }
        if (poke != 1)
            cout << "B" << endl;
        T--;
    }
    return 0;
}