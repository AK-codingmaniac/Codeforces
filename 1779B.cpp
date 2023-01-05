#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,ans,size;
        cin>>n;
        size=n/2;
        if(n%2== 0)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<size; i++)
            {
                cout<<"1 -1 ";
            }
            cout<<endl;
        }
        else if(n== 3)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            ans = size;
            for(int i=0; i<size; i++)
            {
                cout<<1-ans<<" "<<ans<<" ";
            }
            cout<<1-ans<<endl;
        }
    }
    return 0;
}