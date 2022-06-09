#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        long long sum = 0,c = 0;
        while(sum <= n)
        {
            if(a > b)
            {
                b = b+a;
                sum = b;
                c++;
            }
            else
            {
                a = a+b;
                sum = a;
                c++;
            }
            if(sum > n)
            {
                break;
            }
        }
        cout<<c<<endl;
        T--;
    }
    return 0;
}