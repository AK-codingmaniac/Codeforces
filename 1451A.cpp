#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long n;
        cin>>n;
        cout << (n <= 3? n-1 : 2 + (n&1)) << '\n';
        T--;
    }
    return 0;
}