#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a = arr[0],b = arr[0];
        for(int i=0;i<n;i++)
        {
            a = a | arr[i];
            b = b & arr[i];
        }
        cout<<a-b<<endl;
        T--;
    }
    return 0;
}