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
        string str;
        cin>>str;
        int ans = n;
        for(int i=0;i<n/2;i++)
        {
            if(ans <= 1)
            break;
            if((str[i]=='0' && str[n-i-1]=='1') || (str[i]=='1' && str[n-i-1]=='0'))
            {
                ans = ans-2;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;        
        T--;
    }
    return 0;
}