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
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 1 || arr[i] == 3)
            count++;
        }
        cout<<count<<endl;
        T--;
    }
    return 0;
}