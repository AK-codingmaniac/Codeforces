#include <bits/stdc++.h>
using namespace std;

void cnvt(vector<vector<int>> &vec, string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        int dg = str[i] - '0';
        vec[dg].push_back(i);
    }
}
void om(int ans, int len)
{
    if (ans >= len + 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
void anda(string &s, int &n, string &L, string &R)
{
    vector<int> ind(10, 0);
    vector<vector<int>> p(10);
    cnvt(p, s);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            while (ind[j] < p[j].size() && p[j][ind[j]] < res)
            {
                ind[j]++;
            }
        }
        int pk = res;
        for (int j = L[i] - '0'; j <= R[i] - '0'; j++)
        {
            if (ind[j] >= p[j].size())
            {
                pk = s.length();
            }
            else
            {
                pk = max(pk, p[j][ind[j]]);
            }
        }
        res = pk + 1;
    }
    om(res, s.length());
}
void karlo(string &str, int &m, string &l, string &r)
{
    anda(str, m, l, r);
}
int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        string str;
        cin >> str;
        int m;
        cin >> m;
        string l;
        cin >> l;
        string r;
        cin >> r;
        karlo(str, m, l, r);
        T--;
    }
    return 0;
}