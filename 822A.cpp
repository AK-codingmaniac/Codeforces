#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ans = 1;
    for(int i=1;i<=min(a,b);i++)
    {
        ans = ans * i;
    }
    cout<<ans<<endl;
    return 0;
}