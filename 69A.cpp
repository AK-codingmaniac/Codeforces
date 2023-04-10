#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll fx = 0, fy = 0, fz = 0;
    for (ll i = 0; i < n; i++)
    {
        vector<ll> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        fx += arr[0];
        fy += arr[1];
        fz += arr[2];
    }
    if (fx == 0 && fy == 0 && fz == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}