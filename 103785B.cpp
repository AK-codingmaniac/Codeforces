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
        int cnt = 0, add = 1, sum = 0;
        while ((sum + add) <= n)
        {
            sum += add;
            add++;
            cnt++;
        }
        cout<<cnt<<endl;
        T--;
    }
    return 0;
}