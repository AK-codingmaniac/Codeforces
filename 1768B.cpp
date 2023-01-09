#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long n,k;
        cin>>n>>k;
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        int n1=1;
        long long n2=0;
        for(int i=0;i<n;i++)
        {
            if(p[i] == n1)
            n1++;
            else
            n2++;
        }
        int ans = (n2+k-1)/k;
        cout<<ans<<endl;
        T--;
    }
    return 0;
}