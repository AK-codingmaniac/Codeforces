#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T>0)
    {
        int x;
        cin>>x;
        int ans = x & (-x);
        while(!(ans ^ x)  ||  !(ans & x))
        {
            ans++;
        }
        cout<<ans<<endl;
        T--;
    }
    return 0;
}