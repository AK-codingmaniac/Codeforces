#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i=0;
    while(i<str.length())
    {
        if(str[i] == '.')
        {
            cout<<"0";
        }
        else if((str[i] == '-') && (str[i+1] == '.'))
        {
            cout<<"1";
            ++i;
        }
        else if((str[i] == '-') && (str[i+1] == '-'))
        {
            cout<<"2";
            ++i;
        }
        i++;
    }
    return 0;
}