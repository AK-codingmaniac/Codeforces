#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n,m;
        cin>>n>>m;
        cout<<((n*m)+1)/2<<endl;
        T--;
    }
    return 0;
}