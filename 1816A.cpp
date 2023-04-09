#include<bits/stdc++.h>
using namespace std;

void calc(long long a,long long b)
{
    if(a!=1 && b!=1)
    {
        cout<<"2"<<endl;
        cout<<a-1<<" "<<"1"<<endl;
        cout<<a<<" "<<b<<endl;
    }
    else
    {
        cout<<"1"<<endl;
        cout<<a<<" "<<b<<endl;
    }
}
void print(long long a,long long b)
{
    calc(a,b);
}
int main()
{
    long long T;
    cin>>T;
    while(T>0)
    {
        long long a,b;
        cin>>a>>b;
        print(a,b);
        T--;
    }
}