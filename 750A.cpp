#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int sum = 0;
    int c = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + (5*i);
        if(sum > (240-k))
        {
            break;
        }
        c++;
    }
    cout<<c<<endl;
    return 0;
}