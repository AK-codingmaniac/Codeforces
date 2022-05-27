#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<str1.length();i++)
    {
        str1[i]=tolower(str1[i]);
    }
    for(int i=0;i<str2.length();i++)
    {
        str2[i]=tolower(str2[i]);
    }
    int c=0;
    int st1=0;
    for(int i=0;i<str1.length();i++)
    {
        st1 = st1 + (int)(str1[i]);
    }
    int st2 =0;
    for(int i=0;i<str2.length();i++)
    {
        st2 = st2 + (int)(str2[i]);
    }
    if(st1>st2)
    c=1;
    else if(st1==st2)
    c=0;
    else
    c=-1;
    cout<<c<<endl;
    return 0;
}