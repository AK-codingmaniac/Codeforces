#include <bits/stdc++.h>
using namespace std;

void sortkaro(vector<int> &v)
{
    sort(v.begin(), v.end());
}
int ansnikalo(vector<int> &vec, vector<int> &odd, vector<int> &even, int &flag, int &n)
{

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        (vec[i] % 2) ? odd.push_back(vec[i]) : even.push_back(vec[i]);
    }

    sortkaro(odd);
    sortkaro(even);
    if (odd.size() == 0 || even.size() == 0)
        flag = 0;
    else
    {
        if (even[0] - odd[0] > 0)
            flag = 0;
        else
            flag = 1;
    }
    return flag;
}
void sol()
{
    int n, flag = 0;
    cin >> n;
    vector<int> v(n), o, e;

    int res = ansnikalo(v, o, e, flag, n);
    if (flag)
        cout << "NO";
    else
        cout << "YES";
    cout << endl;
}
int main()
{

    int T;
    cin >> T;
    while (T > 0)
    {
        sol();
        T--;
    }
    return 0;
}