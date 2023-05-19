#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    unordered_set<string> hash;
    for (int i = 0; i < n - 1; i++)
    {
        hash.insert(str.substr(i, 2));
    }
    cout << hash.size() << endl;
}
void karo()
{
    sol();
}
int main()
{
    long long T;
    cin >> T;
    while (T > 0)
    {
        karo();
        T--;
    }
    return 0;
}