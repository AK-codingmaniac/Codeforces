#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin>>T;
    while(T>0)
    {
        long long n;
        cin>>n;
        n--;
        vector<long long> v(n);
        for(long long i=0;i<n;i++)
        cin>>v[i];
        vector<long long> ans(n+1);
        ans[0] = v[0];
        ans[n] = v[n-1];
        for(long long i=0;i<n-1;i++)
        {
            ans[i+1] = min(v[i],v[i+1]);
        }
        for(long long i=0;i<n+1;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        T--;
    }
    return 0;
}