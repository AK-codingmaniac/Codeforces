#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mw=0;
    int cw=0;
    while(n>0)
    {
        int m,c;
        cin>>m>>c;
        if(m>c)
        mw++;
        if(c>m)
        cw++;
        n--;
    }
    if(mw>cw)
    cout<<"Mishka"<<endl;
    if(cw>mw)
    cout<<"Chris"<<endl;
    if(mw == cw)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}