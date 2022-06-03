#include<bits/stdc++.h>
using namespace std;

int main()
{
    string tcard;
    cin>>tcard;
    string str;
    for(int i=0;i<5;i++)
    {
        cin>>str;
        if(str[0] == tcard[0] || str[1] == tcard[1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}