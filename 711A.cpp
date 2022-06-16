#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch[n][5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>ch[i][j];
        }
    }
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            if((ch[i][j*3] == 'O') && (ch[i][j*3+1] == 'O'))
            {
                ch[i][j*3] = '+';
                ch[i][j*3 + 1] = '+';
                flag = true;
                break;
            }
        }
        if(flag == true)
        {
            break;
        }
    }
    if(flag == true)
    {
        cout<<"YES"<<'\n';
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<ch[i][j];
            }
            cout<<'\n';
        }
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    return 0;
}