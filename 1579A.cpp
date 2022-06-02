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
        int bcount = count(str.begin(),str.end(),'B');
        if(str.size() == (bcount*2))
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