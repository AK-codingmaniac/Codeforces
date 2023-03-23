#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n,tt=1,eu=1;
        cin>>n;
        int m[] = {0,0};
        int o[] = {0,0};
        for(int i=1;i<=n;i++)
        {
            if(i>eu)
            {
                tt++;
                eu += tt;
            }
            if(tt%4==1 || tt%4==0)
            m[1-i%2]++;
            else
            o[1-i%2]++;
        }
        cout<<m[0]<<" "<<m[1]<<" "<<o[0]<<" "<<o[1]<<endl;
        T--;
    }
    return 0;
}