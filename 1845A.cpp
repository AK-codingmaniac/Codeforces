#include<bits/stdc++.h>
using namespace std;

void pn()
{
    cout<<"NO"<<endl;
}
void py()
{
    cout<<"YES"<<endl;
}
void om(vector<int>& v)
{
    for(auto i:v)
    cout<<i<<" ";
}
void anda(int &a,int &b,int &c)
{
    vector<int> res;
    if(c==b && b==1)
    {

    } 
    else if(c==1)
    {
        while(a>b)
        {
            res.push_back(2);
            a -= 2;
        }
        if(a==1)
        res.erase(res.begin(),res.end());
        else
        res.push_back(a);
    }
    else
    {
        while(a--)
        res.push_back(1);
    }
    if(res.size())
    {
        py();
        cout<<res.size()<<endl;
        om(res);
        cout<<endl;
    }
    else
    {
        pn();
    }
}
void karlo(int n,int k,int x)
{
    anda(n,k,x);
}
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n,k,x;
        cin>>n>>k>>x;
        karlo(n,k,x);
        T--;
    }
    return 0;
}