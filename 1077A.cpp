#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int a,b,k;
        cin>>a>>b>>k;
        cout<<(a-b)*1ll*(k/2)+a*(k&1)<<endl;
        T--;
    }
    return 0;
}