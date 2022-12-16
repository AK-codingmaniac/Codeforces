#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long x1,y1,x2,y2,x3,y3,cond=0;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(x1==x2 || x2==x3 || x1==x3)
        cond = 1;
        if(y1==y2 || y2==y3 || y1==y3)
        {
            if(cond)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
        else
        cout<<"YES"<<endl;
        T--;
    }
    return 0;
}