#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int N;
        cin>>N;
        int arr[N],p=0,n=0,z=0;
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
            {
                p++;
            }
            else if(arr[i] == 0)
            {
                z++;
            }
            else
            {
                n--;
            }
        }
        if(p>2 || n>2)
        {
            cout<<"NO"<<endl;
        }
        T--;
    }
    return 0;
}