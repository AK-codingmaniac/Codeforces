#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int lower=0;
    int upper=0;
    for(int i=0;i<str.length();i++)
    {
        if(islower(str[i]))
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if(lower>=upper)
    {
        for(int i=0;i<str.length();i++)
        {
            str[i]=tolower(str[i]);
        }
    }
    else
    {
        for(int i=0;i<str.length();i++)
        {
            str[i]=toupper(str[i]);
        }
    }
    cout<<str<<endl;
    return 0;
}