#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin>>T;
    while(T>0)
    {
        long long n,m;
        cin>>n>>m;
        vector<vector<long long>> v(m,vector<long long> (n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>v[j][i];
            }
        }
        for(vector<long long> &a:v)
        sort(a.begin(),a.end());
        long long ans = 0;
        for(vector<long long> a:v)
        {
            long long b=0,c=0;
            for(long long d:a)
            {
                ans += (d*c)-b;
                c++;
                b += d;
            }
        }
        cout<<ans<<endl;
        T--;
    }
    return 0;
}