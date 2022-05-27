#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int price = k;
    int ans = 1;
    while((k%10!=0) && (k%10!=r))
    {
        k = k + price;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}