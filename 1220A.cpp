#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int z=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(str[i] == 'z')
        {
            z++;
        }
        else if(str[i] == 'n')
        {
            m++;
        }
    }
    while(m--)
    {
        cout<<"1 ";
    }
    while(z--)
    {
        cout<<"0 ";
    }
    return 0;
}