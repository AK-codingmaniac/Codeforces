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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }
        if (s.size() == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        T--;
    }
    return 0;
}