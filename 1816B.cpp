#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<long long>> &res,long long n)
{
    for(long long m=0;m<2;m++)
    {
        for(long long l=0;l<n;l++)
        {
            cout<<res[m][l]<<" ";
        }
        cout<<endl;
    }
}
void dedo(long long n)
{
    vector<vector<long long>> res(2,vector<long long> (n));
    long long don = 2*n;
    res[0][0] = don;
    res[1][n-1] = don-1;
    long long f=1,b=don-2;

    for(long long k=0;k<n-1;k++)
    {
        if(k&1)
        {
            res[1][k] = b-1;
            res[0][k+1] = b;
            b = b-2;
        }
        else
        {
            res[1][k] = f;
            res[0][k+1] = f+1;
            f = f+2;
        }
    }

    print(res,n);
}
int main()
{
    long long T;
    cin>>T;
    while(T>0)
    {
        long long n;
        cin>>n;
        dedo(n);
        T--;
    }
}