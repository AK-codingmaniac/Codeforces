#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int r;
        cin>>r;
        int d;
        if(r >= 1900)
        {
            d = 1;
        }
        else if((r >= 1600) && (r <= 1899))
        {
            d = 2;
        }
        else if((r >= 1400) && (r <= 1599))
        {
            d = 3;
        }
        else
        {
            d = 4;
        }
        cout<<"Division "<<d<<endl;
        T--;
    }
    return 0;
}