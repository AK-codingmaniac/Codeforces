#include<bits/stdc++.h>
using namespace std;

void om(int &t)
{
    cout<<t<<endl;
}
void anda(int &xa,int &ya,int &xb,int &yb,int &xc,int &yc)
{
    int res=1;
    if((xb<xa && xc<xa) || (xb>xa && xc>xa))
    res += min(abs(xb-xa),abs(xc-xa));
    if((yb<ya && yc<ya) || (yb>ya && yc>ya))
    res += min(abs(yb-ya),abs(yc-ya));
    om(res);
}
void karlo(int a1,int a2,int b1,int b2,int c1,int c2)
{
    anda(a1,a2,b1,b2,c1,c2);
}
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        karlo(a1,a2,b1,b2,c1,c2);
        T--;
    }
    return 0;
}