#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b == c)
        cout<<"+"<<endl;
        else
        cout<<"-"<<endl;
        T--;
    }
    return 0;
}    