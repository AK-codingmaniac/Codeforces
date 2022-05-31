#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n,x;
        cin>>n>>x;
        int c=2,ans=1;
        while(c < n)
        {
            c = c + x;
            ans++;
        }
        cout<<ans<<endl;
        T--;
    }
    return 0;
}