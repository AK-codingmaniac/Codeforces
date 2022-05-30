#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int h,m;
        cin>>h>>m;
        cout<<1440 - (60 * h) - m<<endl;
        T--;
    }
    return 0;
}