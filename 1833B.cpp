#include <bits/stdc++.h>
using namespace std;

void sortkaro(vector<long long> &vec)
{
    sort(vec.begin(), vec.end());
}
void sol(long long &n, vector<long long> &ball, vector<pair<long long, long long>> &vr1)
{
    vector<long long> ans(n);

    for (int i = 0; i < n; i++)
    {
        ans[vr1[i].second] = ball[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    cout << "\n";
}
void karo(long long &n, vector<long long> &ball, vector<pair<long long, long long>> &vr1)
{
    sol(n, ball, vr1);
}
int main()
{

    long long T;
    cin >> T;

    while (T>0)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> app(n), ball(n);

        vector<pair<long long, long long>> vr1;
        for (int i = 0; i < n; i++)
        {
            cin >> app[i];
            vr1.push_back({app[i], i});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ball[i];
        }
        sort(vr1.begin(), vr1.end());
        sortkaro(app);
        sortkaro(ball);
        karo(n, ball, vr1);
        T--;
    }
}