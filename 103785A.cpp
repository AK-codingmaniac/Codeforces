#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if(n % k == 0)
    {
        cout<<n/k<<endl;
    }
    else
    {
        cout<<(n/k)+1<<endl;
    }
    return 0;
}