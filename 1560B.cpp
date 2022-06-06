#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long n = 2 * abs(a-b);
        if(a>n || b>n || c>n)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            long long d = n/2 +c;
            while(d>n)
            {
                d = d - n;
            }
            cout<<d<<endl;
        }
        T--;
    }
    return 0;
}