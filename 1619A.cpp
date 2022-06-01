#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        string str;
        cin >> str;
        bool c = true;
        if (str.length() % 2 == 0)
        {
            for (int i = 0; i < str.length() / 2; i++)
            {
                if (str[i] != str[i + str.length() / 2])
                {
                    c = false;
                }
            }
        }
        else
        {
            c = false;
        }
        if(c == true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        T--;
    }
    return 0;
}