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
        int minno=arr[0];
        for(int i=0;i<n;i++)
        {
            minno = min(minno,arr[i]);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            count = count + (arr[i]-minno);
        }
        cout<<count<<endl;
        T--;
    }
    return 0;
}