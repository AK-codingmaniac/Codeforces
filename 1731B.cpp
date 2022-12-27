#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long compute(long long w,long long x,long long y,long long z)
{
    long long res = (w*x) % MOD;
    res = (res*y) % MOD;
    res = (res*z) % MOD;
    return res;
}

int main()
{
    long long T;
    cin>>T;
    while(T>0)
    {
        long long n;
        cin>>n;
        long long p=n,q=n+1,r=(4*n)-1,s=2022;
        if(p%2 == 0)
        p = p / 2;
        else if(q%2 == 0)
        q = q / 2;
        else if(r%2 == 0)
        r = r / 2;
        if(p%3 == 0)
        p = p / 3;
        else if(q%3 == 0)
        q = q / 3;
        else if(r%3 == 0)
        r = r / 3;
        long long sum = compute(p,q,r,s);
        cout<<sum<<endl;
        T--;
    }
    return 0;
}