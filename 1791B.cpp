#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int x=0,y=0;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            if(str[i] == 'U')
            y++;
            else if(str[i] == 'D')
            y--;
            else if(str[i] == 'L')
            x--;
            else
            x++;
            if(x==1 && y==1)
            flag = true;
        }
        if(flag == true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        T--;
    }
    return 0;
}