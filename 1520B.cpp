#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        int ans = 0;
        for(long long p = 1;p <= n;p= p * 10 + 1)
        {
            for(int i = 1;i <= 9;i++)
            {
                if(p * i <= n)
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
        T--;
    }
    return 0;
}