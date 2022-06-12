#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int a,b;
        cin>>a>>b;
        cout << (a == 0 ? 1 : a + 2 * b + 1) << '\n';
        T--;    
    }
    return 0;
}