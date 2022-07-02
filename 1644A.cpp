#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
        cin >> s;

        bool have_red_key = false;
        bool have_green_key = false;
        bool have_blue_key = false;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'R')
            {
                if (!have_red_key)
                {
                    cout << "NO" << endl;
                   return;
                }
            }
            else if (s[i] == 'G')
            {
                if (!have_green_key)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else if (s[i] == 'B')
            {
                if (!have_blue_key)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else if (s[i] == 'r')
                have_red_key = true;
            else if (s[i] == 'g')
                have_green_key = true;
            else if (s[i] == 'b')
                have_blue_key = true;
        }
        cout << "YES" << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        solve();
        T--;
    }
    return 0;
}