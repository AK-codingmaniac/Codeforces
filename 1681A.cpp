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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }

        if(*max_element(a,a+n) >= *max_element(b,b+m))
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }

        if(*max_element(a,a+n) > *max_element(b,b+m))
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
        T--;
    }
    return 0;
}