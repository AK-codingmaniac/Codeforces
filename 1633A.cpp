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
        if(n % 7 == 0)
        {
            cout<<n<<endl;
        }
        else
        {
            int ans = -1;
            for(int j=0;j<10;j++)
            {
                if((n - (n%10) + j) % 7 == 0)
                {
                    ans = n - n%10 + j;
                }
            }
            cout<<ans<<endl;
        }
        T--;
    }
    return 0;
}