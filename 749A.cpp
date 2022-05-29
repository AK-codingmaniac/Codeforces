#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans;
    if(n % 2 == 0)
    {
        ans = n / 2;
        cout<<ans<<endl;
        for(int i=0;i<ans;i++)
        {
            cout<<"2"<<" ";
        }
    }
    else
    {
        ans = n / 2;
        cout<<ans<<endl;
        for(int i=0;i<(ans-1);i++)
        {
            cout<<"2"<<" ";
        }
        cout<<"3";
    }
    return 0;
}