#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long count=0,sum=0,prod=1;
        sort(arr,arr+n);
        for(long long i=0;i<n;i++)
        {
            prod *= arr[i];
        }
        count = n-1;
        sum = count + prod;
        cout<<2022*sum<<endl;
        T--;
    }
    return 0;
}