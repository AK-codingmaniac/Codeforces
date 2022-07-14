#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long m;
        cin>>m;
        int count=0;
        long long x = m;
        if(x==0)
        count = 1;
        while(x != 0)
        {
            x = x/10;
            ++count;
        }
        long long gen = pow(10,count-1);
        cout<<m-gen<<endl;
        T--;
    }
    return 0;
}