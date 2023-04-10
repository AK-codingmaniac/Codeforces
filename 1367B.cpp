#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll T;
    cin>>T;
    while(T>0)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        cin>>arr[i];
        ll e=0,o=0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]%2 != i%2)
            {
                if(arr[i]%2==0)
                e++;
                else
                o++;
            }
        }
        if(o!=e)
        cout<<"-1"<<endl;
        else
        cout<<e<<endl;
        T--;
    }
}