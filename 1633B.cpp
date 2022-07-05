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
        int z=0,on=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i] == '0')
            {
                z++;
            }
            else
            {
                on++;
            }
        }
        if(z != on)
        {
            cout<<min(z,on)<<endl;
        }
        else
        {
            cout<<z-1<<endl;
        }
        T--;
    }
    return 0;
}