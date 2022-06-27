#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        if(n <= 30)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            if(n==36 || n==40 || n==44)
            {
                cout<<"6 10 15 "<<n-31<<endl;
            }
            else
            {
                cout<<"6 10 14 "<<n-30<<endl;
            }
        }
        T--;
    }
    return 0;
}