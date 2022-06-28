#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long n;
        cin>>n;
        long long ans = n / 10;
        if(n % 10 == 9)
        {
            ans = ans + 1;
        }
        cout<<ans<<endl;
        T--;
    }
    return 0;
}