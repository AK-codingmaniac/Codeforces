#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void print(bool cond)
{
    if(cond)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
bool karlona(vector<ll> &v,ll e)
{
    bool cond;
    for(ll i=0;i<e-2;i++)
    {
        ll anda = v[i]-v[i+1];
        v[i+1]=v[i+1]+anda;
        v[i+2]=v[i+2]+anda;
    }
    if(v[e-1]>=v[e-2])
    cond = true;
    else
    cond = false;
    print(cond);
}
int main()
{
    ll T;
    cin>>T;
    while(T>0)
    {
        ll e;
        cin>>e;
        vector<ll> v(e);
        for(ll i=0;i<e;i++)
        cin>>v[i];
        if(e%2)
        cout<<"YES"<<endl;
        else
        karlona(v,e);
        T--;
    }
}