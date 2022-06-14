#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int arr[4];
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
        int c = 0;
        for(int i=0;i<4;i++)
        {
            if(arr[i] > arr[0])
            c++;
        }
        cout<<c<<endl;
        T--;
    }
}