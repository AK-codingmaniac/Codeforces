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
        sort(arr,arr+n);
        bool flag = true;
        for(int i=1;i<n;i++)
        {
            flag &= (arr[i] - arr[i-1] <= 1);
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        T--;
    }
    return 0;
}