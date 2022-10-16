#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long n,q;
        cin>>n>>q;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long sum=0;
        long long E=0,O=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] % 2 == 0)
            E++;
            else
            O++;
        }
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
        }
        while(q>0)
        {
            long long type,x;
            cin>>type>>x;
            if(type==0)
            {
                sum += x*E;
                if(x%2 != 0)
                {
                    O += E;
                    E=0;
                }
            }
            if(type==1)
            {
                sum += x*O;
                if(x%2 !=0)
                {
                    E += O;
                    O=0;
                }
            }
            cout<<sum<<endl;
            q--;
        }
        T--;
    }
    return 0;
}