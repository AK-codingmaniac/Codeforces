#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int k;
        cin>>k;
        cout<<100/__gcd(k,100)<<endl;
        T--;
    }
    return 0;
}