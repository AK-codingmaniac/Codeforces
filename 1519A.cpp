#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long r,b,d;
        cin>>r>>b>>d;
        if((min(r,b)*(d+1)) >= (max(r,b)))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        T--;
    }
    return 0;
}