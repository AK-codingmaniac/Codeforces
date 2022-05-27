#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<str1.length();i++)
    {
            if(str1[i] != str2[i])
            {
                str1[i]='1';
            }
            else
            {
                str1[i]='0';
            }
        
    }
    cout<<str1<<endl;
    return 0;
}