#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],count=0;
    for(int i=0;i<n;i++)
    {
        count++;
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int d = arr[n-1]-arr[0]+1;
    cout<<d-count<<endl;
    return 0;
}