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
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i=0;i<n;i++)
        {
            mn = min(mn,arr[i]);
            mx = max(mx,arr[i]);
        }
        cout<<mx - mn<<endl;
        T--;
    }
    return 0;
}