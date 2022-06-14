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
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum = sum + arr[i];
        }
        if(sum == n)
        {
            cout<<"0"<<endl;
        }
        else if(sum < n)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<sum - n<<endl;
        }
        T--;
    }
    return 0;
}