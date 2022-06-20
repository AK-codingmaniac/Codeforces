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
        string str, ans;
        cin >> str;
        for (int i = 0; i < str.length(); i = i + 2)
        {
            ans = ans + str[i];
        }
        cout << ans << endl;
        T--;
    }
    return 0;
}