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
        if(n % 2)
        {
            cout<<(n/2)+1<<endl;
        }
        else
        {
            cout<<n/2<<endl;
        }
        T--;
    }
    return 0;
}