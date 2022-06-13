#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        string str,c;
        cin>>str>>c;
        bool f = false;
        for(int i=0;i<str.length();i++)
        {
            if((str[i] == c[0]) && (i % 2 == 0))
            {
                f = true;
            }
        }
        if(f == true)
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