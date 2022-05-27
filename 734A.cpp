#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a=0;
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(a<d)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}