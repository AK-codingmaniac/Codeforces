#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            a = a+x;
        }
        else
        {
            if(a<1)
            {
                ++b;
            }
            else
            {
                --a;
            }
        }
    }
    cout<<b<<endl;
    return 0;
}