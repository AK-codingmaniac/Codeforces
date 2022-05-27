#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        string str;
        cin>>str;
        if((str[0]+str[1]+str[2]) == (str[3]+str[4]+str[5]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        T--;
    }
    return 0;
}