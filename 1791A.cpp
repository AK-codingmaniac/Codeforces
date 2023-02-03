#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        char ch;
        cin>>ch;
        if(ch=='c' || ch=='o' || ch=='d' || ch=='e' || ch=='f' || ch=='r' || ch=='s')
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        T--;
    }
    return 0;
}