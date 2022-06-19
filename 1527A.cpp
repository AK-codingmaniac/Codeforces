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
        int l=0;
        for(int i=0;i<30;i++)
        {
            if(((n>>i)&1)==1)
            {
                l=i;
            }
        }
        cout<<(1<<l)-1<<endl;
        T--;
    }
    return 0;
}