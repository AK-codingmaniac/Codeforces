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
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            even += arr[i];
            else
            odd += arr[i];
        }
        if(even > odd)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        T--;
    }
    return 0;
}