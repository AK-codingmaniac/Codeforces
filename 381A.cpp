#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int left=1,right=n,sum1=0,sum2=0;
    int i=1;
    while(left <= right)
    {
        if(i % 2 == 1)
        {
            if(arr[left] >= arr[right])
            sum1 = sum1+arr[left++];
            else
            sum1 = sum1+arr[right--];
        }
        else
        {
            if(arr[left] >= arr[right])
            sum2 = sum2+arr[left++];
            else
            sum2 = sum2+arr[right--];
        }
        i++;
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}