#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int c = 0;
    for(int i=0;i<n;i++)
    {
        if((i+2) <= (n-1))
        {
            if((str[i]=='x') && (str[i+1]=='x') && (str[i+2]=='x'))
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}