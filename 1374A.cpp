#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int x,y,n;
        cin>>x>>y>>n;
        if(n - n % x + y <= n)
        {
            cout<<n - n % x + y<<endl;
        }
        else
        {
            cout<<n - n % x - (x-y)<<endl;
        }
        T--;
    }
    return 0;
}