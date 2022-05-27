#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>h)
        {
            sum = sum + 2;
        }
        else
        {
            sum = sum + 1;
        }
    }
    cout<<sum<<endl;
    return 0;
}