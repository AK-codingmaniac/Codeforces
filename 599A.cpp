#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long d1,d2,d3;
    cin>>d1>>d2>>d3;
    long long a1,a2,a3,a4;
    a1= d1+d2+d3;
    a2= 2*(d1+d3);
    a3= 2*(d1+d2);
    a4= 2*(d2+d3);
    long long ans = min(a1,min(a2,min(a3,a4)));
    cout<<ans<<endl;
    return 0;
}